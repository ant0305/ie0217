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
//
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
            T valor;
            std::string linea;
            std::getline(std::cin, linea);
            std::stringstream ss(linea);
            ss >> valor;
            if (!ss.fail() && ss.eof()) {
                datos[i][j] = valor;
                break;
            } else {
                std::cout << "Entrada no valida. Intente otra vez: ";
            }
        }
    }
}
}


//
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

