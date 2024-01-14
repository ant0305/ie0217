#include <iostream>

/**
 * @file main.cpp
 * @brief Programa que imprime dos numeros usando una una clase plantilla.
 *
 * El programa muestra una implementacion simple de una clase plantilla la cual
 * es capaz de tomar un dato de cualquier tipo e imprimirlo llamando a una funcion
 * que esta afuera de la clase.
 *
 * @author ant0305
 * @date 13/01/2024
 */

using namespace std;

//Clase plantilla 
template <class T>

class Number {
private:
//Variable de tipo T
    T var;

public:
    /**
     * @brief Constructor de la clase.
     * @param n El valor que se le asigna a var.
     */
    Number(T n) : var(n) {}

    /**
     * @brief Devuelve el valor de la variable.
     * @return El valor de la variable
     */

    T getnum();
};

/**
 * @brief Obtiene el valor almacenado en la variable de la clase.
 *
 * Este metodo devuelve el valor almacenado en la variable privada de la clase.
 *
 * @return Valor almacenado en la variable de la clase.
 */
template <class T>
T Number<T>::getnum() {
    return var;
}


int main() {
    // Crear objeto con tipo int
    Number<int> numberInt(7);

    // Crear objeto con tipo double
    Number<double> numberDouble(7.7);


    cout << "int Number = " << numberInt.getnum() << endl;


    cout << "double Number " << numberDouble.getnum() << endl;

    return 0;
}
