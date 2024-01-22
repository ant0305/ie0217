#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <iostream>
#include <vector>
#include <complex>
#include <limits>
#include <stdexcept>

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
    
private:
    int filas, columnas;
    std::vector<std::vector<T>> datos;
};


#endif 