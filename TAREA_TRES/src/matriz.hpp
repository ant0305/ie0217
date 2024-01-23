#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <iostream>
#include <vector>
#include <complex>
#include <limits>
#include <stdexcept>


template<typename T>
class OperacionesBasicas;

template<typename T>
class Matriz {
public:
    Matriz() : filas(0), columnas(0) {}
    Matriz(int filas, int columnas);
    void colocarElemento(int fila, int columna, T valor);
    static char pedirTipoOperacion();
    void pedirDimensionesYDatos();
    T obtenerElemento(int fila, int columna) const;
    int obtenerFilas() const { return filas; }
    int obtenerColumnas() const { return columnas; }


    Matriz<T> operator+(const Matriz<T>& otra) const {
        return OperacionesBasicas<T>::suma(*this, otra);
    }
    Matriz<T> operator-(const Matriz<T>& otra) const {
        return OperacionesBasicas<T>::resta(*this, otra);
    }
    Matriz<T> operator*(const Matriz<T>& otra) const {
        return OperacionesBasicas<T>::multiplicacion(*this, otra);
    }

private:
    int filas, columnas;
    std::vector<std::vector<T>> datos;
};

template<typename T>
class OperacionesBasicas {
public:
    static Matriz<T> suma(const Matriz<T>& m1, const Matriz<T>& m2);
    static Matriz<T> resta(const Matriz<T>& m1, const Matriz<T>& m2);
    static Matriz<T> multiplicacion(const Matriz<T>& m1, const Matriz<T>& m2);
};


#endif 