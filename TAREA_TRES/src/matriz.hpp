/**
 * @file matriz.hpp
 * @brief Definicion de las clases matriz, operacionesBasicas, operacionsCompleja y ManejadorDeMatrices
 * las cuales son esenciales a la hora de realizar operaciones con matrices

 * @details Este archivo contiene la declaracion de las clases matriz, 
 * operacionesBasicas, operacionsCompleja y ManejadorDeMatrices las cuales son
 * las encargadas de realizar diferentes operaciones con matrices ya sea con
 * datos enteros, flotantes o numeros complejos
 *
 * @author ant0305
 * @date 23/01/2024
 * @license GPL
 */

#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <iostream>
#include <vector>
#include <complex>
#include <limits>
#include <stdexcept>
#include <algorithm> 

template<typename T>
class OperacionesBasicas;
/**
 * @class Matriz
 * @brief Representa una matriz de elementos de tipo T
 *
 * Esta clase representa una matriz de elementos de tipo T y proporciona
 * funcionalidades para realizar operaciones basicas con matrices suma, resta y multiplicacion.
 */
template<typename T>
class Matriz {
public:
    Matriz() : filas(0), columnas(0) {}
    
    /**
     * @brief Constructor de la clase Matriz
     * @param filas Cantidad de filas de la matriz
     * @param columnas Cantidad de columnas de la matriz
     */
    Matriz(int filas, int columnas);
    /**
     * @brief Coloca un elemento en la posicion especificada de la matriz
     * @param fila Fila en la que se colocara el elemento
     * @param columna Columna en la que se colocara el elemento
     * @param valor Valor del elemento a colocar
     */
    void colocarElemento(int fila, int columna, T valor);
    /**
     * @brief Se utiliza para solicitar al usuario que operacion desea realizar
     * @return Caracter que representa el tipo de operacion (suma, resta o multiplicacion)
     */
    static char pedirTipoOperacion();
    /**
     * @brief Solicita al usuario que ingrese las dimensiones y los datos de la matriz.
     * @throws std::invalid_argument si las dimensiones ingresadas no son validas
     */
    void pedirDimensionesYDatos();

    /**
     * @brief Obtiene el elemento en la posicion especificada de la matriz
     * @param fila Fila del elemento deseado
     * @param columna Columna del elemento deseado
     * @return Valor del elemento en la posicion especificada
     */
    T obtenerElemento(int fila, int columna) const;
    /**
     * @brief Obtiene la cantidad de filas de la matriz
     * @return Numero de filas de la matriz
     */
    int obtenerFilas() const { return filas; }
    /**
     * @brief Obtiene la cantidad de columnas de la matriz
     * @return Numero de columnas de la matriz
     */
    int obtenerColumnas() const { return columnas; }
    /**
     * @brief Sobrecarga de los operadores para matrices
     * @param otra Matriz con la que se realizara la operacion
     * @return Matriz resultante de las operaciones
     */
    Matriz<T> operator+(const Matriz<T>& otra) const {
        return OperacionesBasicas<T>::suma(*this, otra);
        //Sobrecarga del operador suma
    }
    Matriz<T> operator-(const Matriz<T>& otra) const {
        return OperacionesBasicas<T>::resta(*this, otra);
        //Sobrecarga del operadore resta
    }
    Matriz<T> operator*(const Matriz<T>& otra) const {
        return OperacionesBasicas<T>::multiplicacion(*this, otra);
        //Sobrecarga del operador multiplicacion
    }

private:
    int filas, columnas;
    std::vector<std::vector<T>> datos;
};

/**
 * @class OperacionesBasicas
 * @brief Representa las operaciones que se pueden llegar a realizar con las matrices
 * que estan representadas por numeros reales(int,float)
 *
 * Esta clase es la encargada de realizar las diferentes operaciones entre
 * matrices compuestas solo por numeros reales ya sea compuesta solo por 
 * enteros o flotantes
 */

template<typename T>
class OperacionesBasicas {
public:
    /**
     * @brief Realiza la suma de dos matrices del mismo tipo
     * @param m1 Primera matriz
     * @param m2 Segunda matriz
     * @return Matriz resultante de la suma
     */
    static Matriz<T> suma(const Matriz<T>& m1, const Matriz<T>& m2);
        /**
     * @brief Realiza la resta de dos matrices del mismo tipo
     * @param m1 Primera matriz
     * @param m2 Segunda matriz
     * @return Matriz resultante de la resta
     */
    static Matriz<T> resta(const Matriz<T>& m1, const Matriz<T>& m2);
    /**
     * @brief Realiza la multiplicacion de dos matrices del mismo tipo
     * @param m1 Primera matriz
     * @param m2 Segunda matriz
     * @return Matriz resultante de la multiplicacion
     */
    static Matriz<T> multiplicacion(const Matriz<T>& m1, const Matriz<T>& m2);
};

/**
 * @class OperacioneCompleja
 * @brief Representa las operaciones que se pueden llegar a realizar con las matrices
 * que estan representadas por numeros complejos
 *
 * Esta clase es la encargada de realizar las diferentes operaciones entre
 * matrices compuestas solo por numeros complejos
 */

template<typename T>
class OperacionCompleja {
public:
    /**
     * @brief Realiza la suma de dos matrices complejas
     * @param m1 Primera matriz
     * @param m2 Segunda matriz
     * @return Matriz resultante de la suma
     */
    static Matriz<std::complex<T>> suma(const Matriz<std::complex<T>>& m1, const Matriz<std::complex<T>>& m2);
        /**
     * @brief Realiza la resta de dos matrices complejas
     * @param m1 Primera matriz
     * @param m2 Segunda matriz
     * @return Matriz resultante de la resta
     */
    static Matriz<std::complex<T>> resta(const Matriz<std::complex<T>>& m1, const Matriz<std::complex<T>>& m2);
        /**
     * @brief Realiza la multiplicacion de dos matrices complejas
     * @param m1 Primera matriz
     * @param m2 Segunda matriz
     * @return Matriz resultante de la multiplicacion
     */
    static Matriz<std::complex<T>> multiplicacion(const Matriz<std::complex<T>>& m1, const Matriz<std::complex<T>>& m2);
    
    /**
     * Sobrecarga de operadores para matrices de numeros complejos
     * @param otra Matriz de numeros complejos con la que se realizara la operacion
     * @return Matriz resultante de las operaciones de numeros complejos
     */

    Matriz<std::complex<T>> operator+(const Matriz<std::complex<T>>& otra) const {
        return suma(*this, otra);
        //Sobrecarga del operador suma
    }

    Matriz<std::complex<T>> operator-(const Matriz<std::complex<T>>& otra) const {
        return resta(*this, otra);
        //Sobrecarga del operadores resta
    }

    Matriz<std::complex<T>> operator*(const Matriz<std::complex<T>>& otra) const {
        return multiplicacion(*this, otra);
        //Sobrecarga del operador multiplicacion
    }
};

/**
 * @class ManejadorDeMatrices
 * @brief Clase para manejar las operaciones con matrices de tipo int o float.
 *
 * Esta clase proporciona metodos para la manipulacion de matrices e impresion
 * de matrices que estan formadas por datos de tipo int y float
 * Incluye funciones para imprimir matrices y para realizar y mostrar
 * los resultados.
 *
 * @tparam T Tipo de datos de los elementos de la matriz los cuales pueden
 * ser int o float
 */

template<typename T>
class ManejadorDeMatrices {
public:
    /**
     * Imprime una matriz en la salida estandar
     * @param matriz Matriz a imprimir
     */
    static void imprimirMatriz(const Matriz<T>& matriz);
    /**
     * Realiza operaciones con matrices y muestra el resultado en la salida estandar
     * @param m1 Primera matriz
     * @param m2 Segunda matriz
     * @param operacion Caracter que representa la operacion a realizar
     */
    static void realizarOperacionesYMostrar(const Matriz<T>& m1, const Matriz<T>& m2, char operacion);
};

/**
 * @class ManejadorDeMatrices
 * @brief Clase para manejar las operaciones con matrices con elementos complejos
 *
 * Esta clase proporciona metodos para la manipulacion de matrices e impresion
 * de matrices que estan formadas por datos de tipo complejos
 * Incluye funciones para imprimir matrices y para realizar y mostrar
 * los resultados.
 *
 * @tparam T Tipo de datos de los elementos de la matriz los cuales son complejos.
 */


template<typename T>
class ManejadorDeMatrices<std::complex<T>> {
public:
    /**
     * Imprime una matriz en la salida estandar
     * @param matriz Matriz a imprimir
     */
    static void imprimirMatriz(const Matriz<std::complex<T>>& matriz);
    /**
     * Realiza operaciones con matrices y muestra el resultado en la salida estandar
     * @param m1 Primera matriz
     * @param m2 Segunda matriz
     * @param operacion Caracter que representa la operacion a realizar
     */
    static void realizarOperacionesYMostrar(const Matriz<std::complex<T>>& m1, const Matriz<std::complex<T>>& m2, char operacion);
};


#endif 