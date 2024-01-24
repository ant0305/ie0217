
/**
 * @file matriz.hpp
 * @brief Definicion de la clase Matriz y funciones relacionadas.
 */

#include "matriz.hpp"
/**
 * @param filas Numero de filas de la matriz.
 * @param columnas Numero de columnas de la matriz.
 *
 * Constructor de la clase Matriz. Crea una matriz con las dimensiones especificadas.
 * 
 * @throws std::invalid_argument Si las dimensiones no son positivas.
 * @tparam T Tipo de dato de los elementos de la matriz.
 */
template<typename T>
Matriz<T>::Matriz(int filas, int columnas) : filas(filas), columnas(columnas) {
    if (filas <= 0 || columnas <= 0) {
        throw std::invalid_argument("Dimensiones de la matriz deben ser positivas");
    }
    datos.resize(filas, std::vector<T>(columnas));
}

/**
 * @brief Se desarrolla el metodo para preguntar al usuario que operacion quiere hacer
 * 
 * Solicita al usuario que seleccione el tipo de operacion a realizar suma, resta o multiplicacion.
 * @tparam T Tipo de dato de los elementos de la matriz.
 * @throws std::invalid_argument Si la operacion seleccionada no es valida.
 * @return El tipo de operacion seleccionada como char ('+', '-', '*').
 */
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
/**
 * @brief Lee un valor de tipo T.
 *
 * Esta funcion se utiliza para leer un valor de tipo T desde un flujo de entrada.
 *
 * @param is Flujo de entrada desde el cual se leera el valor.
 * @param valor Variable de tipo T donde se almacenara el valor leido.
 * @tparam T Tipo de dato del valor a leer.
 */
template<typename T>
void leerValor(std::istream& is, T& valor) {
    is >> valor;
}



/**
 * @brief Lee un valor complejo de tipo std::complex<T>.
 *
 * Esta funcion se utiliza para leer un valor complejo de tipo std::complex<T>.
 *
 * @param is Flujo de entrada desde el cual se leera el valor complejo.
 * @param valor Variable de tipo std::complex<T> donde se almacenara el valor complejo leido.
 * @tparam T Tipo de dato del componente real e imaginario del valor complejo.
 */
template<typename T>
void leerValor(std::istream& is, std::complex<T>& valor) {
    T real, imag;
    is >> real >> imag; 
    valor = std::complex<T>(real, imag);
}


/**
 * @brief Verifica si una cadena de caracteres es una entrada valida.
 *
 * Esta funcion verifica si una cadena de caracteres es una entrada valida ya sea de tipo
 * int o de tipo float
 *
 * @param linea Cadena de caracteres que se va a verificar como entrada.
 * @return `true` si la cadena es una entrada valida y `false` en caso contrario.
 * @tparam T Tipo de dato para el cual se verifica la validez de la entrada int o float
 */
template<typename T>
bool esEntradaValida(const std::string& linea) {
    if (std::is_same<T, int>::value) {
        // Verifica si la cadena no contiene un punto y todos los caracteres son digitos.
        return linea.find('.') == std::string::npos && std::all_of(linea.begin(), linea.end(), ::isdigit);
    }
    if (std::is_same<T, float>::value) {
        // Verifica si la cadena contiene un punto y todos los caracteres son digitos o el punto decimal.
        bool contienePunto = linea.find('.') != std::string::npos;
        bool soloNumeros = std::all_of(linea.begin(), linea.end(), [](char c) { return std::isdigit(c) || c == '.'; });
        return contienePunto && soloNumeros;
    }
    return true; 
}


/**
 * @brief Solicita al usuario las dimensiones y los datos para llenar la matriz.
 *
 * Esta funcion solicita al usuario que ingrese el numero de filas y columnas de la matriz,
 * asi como los elementos de la matriz uno por uno y da un mensaje de error si se ingresa
 * un dato invalido.
 *
 * @throws std::invalid_argument Si las dimensiones no son positivas.
 * @tparam T Tipo de dato de los elementos de la matriz.
 */
template<typename T>
void Matriz<T>::pedirDimensionesYDatos() {
    // Solicita al usuario que ingrese el numero de filas y columnas de la matriz.
    std::cout << "Ingrese el numero de filas y columnas de la matriz: ";
    std::cin >> filas >> columnas;

    // Verifica que las dimensiones ingresadas sean positivas.
    if (filas <= 0 || columnas <= 0) {
        throw std::invalid_argument("Dimensiones de la matriz deben ser positivas");
    }

    // Redimensiona la matriz para que coincida con las dimensiones ingresadas.
    datos.resize(filas, std::vector<T>(columnas));

    // Limpia el buffer de entrada despues de la lectura de las dimensiones.
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Ciclos anidados para recorrer cada elemento de la matriz.
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            bool inputValido = false;
            while (!inputValido) {
                // Mensaje adicional para elementos complejos.
                std::string mensaje = (std::is_same<T, std::complex<float>>::value || std::is_same<T, std::complex<double>>::value) 
                                      ? " (para complejos: real `Espacio` imaginaria)" : "";

                // Solicita al usuario que ingrese un elemento a la matriz
                std::cout << "Ingrese el elemento [" << i << "][" << j << "]" << mensaje << ": ";
                std::string linea;
                std::getline(std::cin, linea);
                std::stringstream ss(linea);
                T valor;
                leerValor(ss, valor);

                // Verifica si la entrada es valida.
                if (!ss.fail() && esEntradaValida<T>(linea)) {
                    datos[i][j] = valor;
                    inputValido = true;
                } else {
                    std::cout << "Entrada no valida. Intente de nuevo: ";
                }
            }
        }
    }
}

/**
 * @brief Coloca un elemento en una posicion especifica de la matriz.
 *
 * Esta funcion permite colocar un valor en una posicion especifica de la matriz.
 * Se verifica que la fila y la columna esten dentro de los limites validos de la matriz.
 *
 * @param fila Fila en la que se colocara el elemento.
 * @param columna Columna en la que se colocara el elemento.
 * @param valor Valor de tipo T que se colocara en la posicion especificada.
 * @throws std::out_of_range Si la fila o la columna estan fuera de los limites validos de la matriz.
 */
template<typename T>
void Matriz<T>::colocarElemento(int fila, int columna, T valor) {
    if (fila < 0 || fila >= filas || columna < 0 || columna >= columnas) {
        throw std::out_of_range("indice fuera de rango");
    }
    datos[fila][columna] = valor;
}

/**
 * @brief Obtiene el valor de un elemento en una posicion especifica de la matriz.
 *
 * Esta funcion permite obtener el valor de una posicion especifica de la matriz.
 * Se verifica que la fila y la columna esten dentro de los limites validos de la matriz.
 *
 * @param fila Fila de la que se desea obtener el elemento.
 * @param columna Columna de la que se desea obtener el elemento.
 * @return Valor de tipo T en la posicion especificada de la matriz.
 * @throws std::out_of_range Si la fila o la columna estan fuera de los limites validos de la matriz.
 */
template<typename T>
T Matriz<T>::obtenerElemento(int fila, int columna) const {
    if (fila < 0 || fila >= filas || columna < 0 || columna >= columnas) {
        throw std::out_of_range("indice fuera de rango");
    }
    return datos[fila][columna];
}


/**
 * @brief Realiza la operacion de suma entre dos matrices de numeros reales.
 *
 * Esta funcion permite realizar la operacion de suma entre dos matrices de numeros reales.
 * Se verifica que las matrices tengan las mismas dimensiones
 * antes de realizar la suma.
 *
 * @param m1 Primera matriz que se sumara.
 * @param m2 Segunda matriz que se sumara.
 * @throws std::invalid_argument Si las dimensiones de las matrices no son iguales.
 * @return resultado de la suma de las dos matrices
 */
template<typename T>
Matriz<T> OperacionesBasicas<T>::suma(const Matriz<T>& m1, const Matriz<T>& m2) {
    //Se verifica que las matrices tengan las mismas dimensiones
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
/**
 * @brief Realiza la operacion de resta entre dos matrices de numeros reales.
 *
 * Esta funcion permite realizar la operacion de suma entre dos matrices de numeros reales.
 * Se verifica que las matrices tengan las mismas dimensiones
 * antes de realizar la resta.
 *
 * @param m1 Primera matriz que se restara.
 * @param m2 Segunda matriz que se restara.
 * @throws std::invalid_argument Si las dimensiones de las matrices no son iguales.
 * @return El resultado de la resta de las dos matrices.
 */
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

/**
 * @brief Realiza la operacion de multiplicacion entre dos matrices de numeros reales.
 *
 * Esta funcion permite realizar la operacion de multiplicacion entre dos matrices de numeros reales.
 * Se verifica que el numero de columnas de la primera matriz sea igual al numero de filas de la segunda
 * antes de realizar la multiplicacion.
 *
 * @param m1 Primera matriz que se multiplicara
 * @param m2 Segunda matriz que se multiplicara
 * @throws std::invalid_argument Si las dimensiones de la matriz no son aptas para realizar la multiplicacion.
 * @return Una nueva matriz que es el resultado de la multiplicacion de las dos matrices de entrada.
 */
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
/**
 * @brief Realiza la operacion de suma entre dos matrices de numeros complejos.
 *
 * Esta funcion permite realizar la operacion de suma entre dos matrices de numeros complejos.
 * Se verifica que las matrices tengan las mismas dimensiones
 * antes de realizar la suma.
 *
 * @param m1 Primera matriz que se sumara.
 * @param m2 Segunda matriz que se sumara.
 * @throws std::invalid_argument Si las dimensiones de las matrices no son iguales.
 * @return resultado de la suma de las dos matrices
 */
template<typename T>
Matriz<std::complex<T>> OperacionCompleja<T>::suma(const Matriz<std::complex<T>>& m1, const Matriz<std::complex<T>>& m2) {
    if (m1.obtenerFilas() != m2.obtenerFilas() || m1.obtenerColumnas() != m2.obtenerColumnas()) {
        throw std::invalid_argument("Las dimensiones de las matrices deben ser iguales para la suma.");
    }

    Matriz<std::complex<T>> resultado(m1.obtenerFilas(), m1.obtenerColumnas());
    for (int i = 0; i < m1.obtenerFilas(); ++i) {
        for (int j = 0; j < m1.obtenerColumnas(); ++j) {
            resultado.colocarElemento(i, j, m1.obtenerElemento(i, j) + m2.obtenerElemento(i, j));
        }
    }
    return resultado;
}
/**
 * @brief Realiza la operacion de resta entre dos matrices de numeros complejos.
 *
 * Esta funcion permite realizar la operacion de suma entre dos matrices de numeros complejos.
 * Se verifica que las matrices tengan las mismas dimensiones
 * antes de realizar la resta.
 *
 * @param m1 Primera matriz que se restara.
 * @param m2 Segunda matriz que se restara.
 * @throws std::invalid_argument Si las dimensiones de las matrices no son iguales.
 * @return El resultado de la resta de las dos matrices.
 */
template<typename T>
Matriz<std::complex<T>> OperacionCompleja<T>::resta(const Matriz<std::complex<T>>& m1, const Matriz<std::complex<T>>& m2) {
    if (m1.obtenerFilas() != m2.obtenerFilas() || m1.obtenerColumnas() != m2.obtenerColumnas()) {
        throw std::invalid_argument("Las dimensiones de las matrices deben ser iguales para la resta.");
    }

    Matriz<std::complex<T>> resultado(m1.obtenerFilas(), m1.obtenerColumnas());
    for (int i = 0; i < m1.obtenerFilas(); ++i) {
        for (int j = 0; j < m1.obtenerColumnas(); ++j) {
            resultado.colocarElemento(i, j, m1.obtenerElemento(i, j) - m2.obtenerElemento(i, j));
        }
    }
    return resultado;
}
/**
 * @brief Realiza la operacion de multiplicacion entre dos matrices de numeros complejos.
 *
 * Esta funcion permite realizar la operacion de multiplicacion entre dos matrices de numeros complejos.
 * Se verifica que el numero de columnas de la primera matriz sea igual al numero de filas de la segunda
 * antes de realizar la multiplicacion.
 *
 * @param m1 Primera matriz que se multiplicara
 * @param m2 Segunda matriz que se multiplicara
 * @throws std::invalid_argument Si las dimensiones de la matriz no son aptas para realizar la multiplicacion.
 * @return Una nueva matriz que es el resultado de la multiplicacion de las dos matrices de entrada.
 */
template<typename T>
Matriz<std::complex<T>> OperacionCompleja<T>::multiplicacion(const Matriz<std::complex<T>>& m1, const Matriz<std::complex<T>>& m2) {
    if (m1.obtenerColumnas() != m2.obtenerFilas()) {
        throw std::invalid_argument("El numero de columnas de la primera matriz debe ser igual al numero de filas de la segunda para la multiplicacion.");
    }

    Matriz<std::complex<T>> resultado(m1.obtenerFilas(), m2.obtenerColumnas());
    for (int i = 0; i < resultado.obtenerFilas(); ++i) {
        for (int j = 0; j < resultado.obtenerColumnas(); ++j) {
            std::complex<T> suma = 0;
            for (int k = 0; k < m1.obtenerColumnas(); ++k) {
                suma += m1.obtenerElemento(i, k) * m2.obtenerElemento(k, j);
            }
            resultado.colocarElemento(i, j, suma);
        }
    }
    return resultado;
}


/**
 * @brief Imprime una matriz de numeros reales en la consola.
 *
 * Esta funcion permite imprimir una matriz de numeros reales en la consola
 * con el formato natural de las matrices
 *
 * @param matriz La matriz que se imprimira en la consola.
 */
template<typename T>
void ManejadorDeMatrices<T>::imprimirMatriz(const Matriz<T>& matriz) {
    for (int i = 0; i < matriz.obtenerFilas(); ++i) {
        for (int j = 0; j < matriz.obtenerColumnas(); ++j) {
            std::cout << matriz.obtenerElemento(i, j) << "\t";
        }
        std::cout << std::endl;
    }
}
/**
 * @brief Esta funcion llama al metodo encargado de realizar una operacion y muestra el resultado
 * se utiliza cuando el usuario decide trabajar con numeros reales(int, float).
 * 
 * Imprime las dos matrices de entrada y luego muestra el resultado de la operacion en la consola.
 *
 * @param m1 La primera matriz de la operacion.
 * @param m2 La segunda matriz de la operacion.
 * @param operacion El caracter que representa la operacion a realizar.
 */
template<typename T>
void ManejadorDeMatrices<T>::realizarOperacionesYMostrar(const Matriz<T>& m1, const Matriz<T>& m2, char operacion) { // Cambiado a char
    std::cout << "Matriz 1:" << std::endl;
    imprimirMatriz(m1);
    std::cout << "Matriz 2:" << std::endl;
    imprimirMatriz(m2);

    try {
        switch (operacion) {
            case '+': {
                std::cout << "Suma de Matrices:" << std::endl;
                imprimirMatriz(OperacionesBasicas<T>::suma(m1, m2));
                break;
            }
            case '-': {
                std::cout << "Resta de Matrices:" << std::endl;
                imprimirMatriz(OperacionesBasicas<T>::resta(m1, m2));
                break;
            }
            case '*': {
                std::cout << "Multiplicacion de Matrices:" << std::endl;
                imprimirMatriz(OperacionesBasicas<T>::multiplicacion(m1, m2));
                break;
            }
            default:
                std::cout << "Operacion no valida." << std::endl;
        }
    } catch (const std::exception& e) {
        // Muestra un mensaje de error si ocurre una excepcion durante la operacion
        std::cout << "Error al realizar operaciones: " << e.what() << std::endl;
    }
}

/**
 * @brief Imprime una matriz de numeros complejos en la consola.
 *
 * Esta funcion permite imprimir una matriz de numeros complejos en la consola
 * con el formato natural de las matrices
 *
 * @param matriz La matriz que se imprimira en la consola.
 */
template<typename T>
void ManejadorDeMatrices<std::complex<T>>::imprimirMatriz(const Matriz<std::complex<T>>& matriz) {
    for (int i = 0; i < matriz.obtenerFilas(); ++i) {
        for (int j = 0; j < matriz.obtenerColumnas(); ++j) {
            std::cout << matriz.obtenerElemento(i, j) << "\t";
        }
        std::cout << std::endl;
    }
}
/**
 * @brief Esta funcion llama al metodo encargado de realizar una operacion seleccionada
 * por el usuario y muestra el resultado, solo se usa en caso de que el usuario
 * haya elegido trabajar con numeros complejos.
 * 
 * Imprime las dos matrices de entrada y luego muestra el resultado de la operacion en la consola.
 *
 * @param m1 La primera matriz de la operacion.
 * @param m2 La segunda matriz de la operacion.
 * @param operacion El caracter que representa la operacion a realizar.
 */
template<typename T>
void ManejadorDeMatrices<std::complex<T>>::realizarOperacionesYMostrar(const Matriz<std::complex<T>>& m1, const Matriz<std::complex<T>>& m2, char operacion) {
    std::cout << "Matriz 1 (Compleja):" << std::endl;
    imprimirMatriz(m1);
    std::cout << "Matriz 2 (Compleja):" << std::endl;
    imprimirMatriz(m2);

    try {
        Matriz<std::complex<T>> resultado;
        switch (operacion) {
            case '+':
                std::cout << "Suma de Matrices:" << std::endl;
                resultado = OperacionCompleja<T>::suma(m1, m2);
                break;
            case '-':
                std::cout << "Resta de Matrices:" << std::endl;
                resultado = OperacionCompleja<T>::resta(m1, m2);
                break;
            case '*':
                std::cout << "Multiplicacion de Matrices:" << std::endl;
                resultado = OperacionCompleja<T>::multiplicacion(m1, m2);
                break;
            default:
                std::cout << "Operacion no valida." << std::endl;
                return;
        }
        imprimirMatriz(resultado);
    } catch (const std::exception& e) {
        // Muestra un mensaje de error si ocurre una excepcion durante la operacion
        std::cout << "Error al realizar operaciones: " << e.what() << std::endl;
    }
}

