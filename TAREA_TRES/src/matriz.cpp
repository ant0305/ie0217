#include "matriz.hpp"

template<typename T>
Matriz<T>::Matriz(int filas, int columnas) : filas(filas), columnas(columnas) {
    if (filas <= 0 || columnas <= 0) {
        throw std::invalid_argument("Dimensiones de la matriz deben ser positivas");
    }
    datos.resize(filas, std::vector<T>(columnas));
}

template<typename T>
char Matriz<T>::pedirTipoOperacion() {
    std::cout << "Seleccione la operacion a realizar (1: Suma, 2: Resta, 3: Multiplicacion): ";
    int seleccion;
    std::cin >> seleccion;
    switch (seleccion) {
        case 1: return '+';
        case 2: return '-';
        case 3: return '*';
        default: throw std::invalid_argument("Operacion no valida");
    }
}

template<typename T>
void Matriz<T>::pedirDimensionesYDatos() {
    std::cout << "Ingrese el numero de filas y columnas de la matriz: ";
    std::cin >> filas >> columnas;

    if (filas <= 0 || columnas <= 0) {
        throw std::invalid_argument("Dimensiones de la matriz deben ser positivas");
    }

    datos.resize(filas, std::vector<T>(columnas));
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
        while (true) {
            std::cout << "Ingrese el elemento [" << i << "][" << j << "]: ";
            std::string linea;
            std::getline(std::cin, linea);
            std::stringstream ss(linea);
            T valor;
            ss >> valor;
            if (!ss.fail() && ss.eof()) {
                if (std::is_same<T, float>::value && linea.find('.') == std::string::npos) {
                    std::cout << "Ingrese un numero flotante: ";
                    continue;
                }
                datos[i][j] = valor;
                break;
            } else {
                std::cout << "Entrada no valida: ";
            }
        }
    }
}
}

template<typename T>
void Matriz<T>::colocarElemento(int fila, int columna, T valor) {
    if (fila < 0 || fila >= filas || columna < 0 || columna >= columnas) {
        throw std::out_of_range("indice fuera de rango");
    }
    datos[fila][columna] = valor;
}

template<typename T>
T Matriz<T>::obtenerElemento(int fila, int columna) const {
    if (fila < 0 || fila >= filas || columna < 0 || columna >= columnas) {
        throw std::out_of_range("indice fuera de rango");
    }
    return datos[fila][columna];
}

template<typename T>
Matriz<T> OperacionesBasicas<T>::suma(const Matriz<T>& m1, const Matriz<T>& m2) {
    if (m1.obtenerFilas() != m2.obtenerFilas() || m1.obtenerColumnas() != m2.obtenerColumnas()) {
        throw std::invalid_argument("Las dimensiones de las matrices deben ser iguales para la suma.");
    }
    Matriz<T> resultado(m1.obtenerFilas(), m1.obtenerColumnas());
    for (int i = 0; i < m1.obtenerFilas(); ++i) {
        for (int j = 0; j < m1.obtenerColumnas(); ++j) {
            resultado.colocarElemento(i, j, m1.obtenerElemento(i, j) + m2.obtenerElemento(i, j));
        }
    }
    return resultado;
}

template<typename T>
Matriz<T> OperacionesBasicas<T>::resta(const Matriz<T>& m1, const Matriz<T>& m2) {
    if (m1.obtenerFilas() != m2.obtenerFilas() || m1.obtenerColumnas() != m2.obtenerColumnas()) {
        throw std::invalid_argument("Las dimensiones de las matrices deben ser iguales para la resta.");
    }
    Matriz<T> resultado(m1.obtenerFilas(), m1.obtenerColumnas());
    for (int i = 0; i < m1.obtenerFilas(); ++i) {
        for (int j = 0; j < m1.obtenerColumnas(); ++j) {
            resultado.colocarElemento(i, j, m1.obtenerElemento(i, j) - m2.obtenerElemento(i, j));
        }
    }
    return resultado;
}

template<typename T>
Matriz<T> OperacionesBasicas<T>::multiplicacion(const Matriz<T>& m1, const Matriz<T>& m2) {
    if (m1.obtenerColumnas() != m2.obtenerFilas()) {
        throw std::invalid_argument("El numero de columnas de la primera matriz debe ser igual al numero de filas de la segunda para la multiplicacion.");
    }
    Matriz<T> resultado(m1.obtenerFilas(), m2.obtenerColumnas());
    for (int i = 0; i < resultado.obtenerFilas(); ++i) {
        for (int j = 0; j < resultado.obtenerColumnas(); ++j) {
            T suma = T();
            for (int k = 0; k < m1.obtenerColumnas(); ++k) {
                suma += m1.obtenerElemento(i, k) * m2.obtenerElemento(k, j);
            }
            resultado.colocarElemento(i, j, suma);
        }
    }
    return resultado;
}

