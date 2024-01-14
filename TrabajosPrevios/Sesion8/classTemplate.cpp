#include <iostream>

/**
 * @file main.cpp
 * @brief Programa que imprime dos numeros usando una clase plantilla.
 *
 * El programa muestra una implementacion simple de una clase plantilla, la cual
 * es capaz de tomar un dato de cualquier tipo e imprimirlos.
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
    T num;

public:
    /**
     * @brief Constructor de la clase.
     * @param n El valor que se le asigna a num.
     */
    Number(T n) : num(n) {}

    /**
     * @brief Devuelve el valor de la variable.
     * @return Valor almacenado en la variable num.
     */
    T getNum() {
        return num;
    }
};

int main() {
    //Crear objeto 
    Number<int> numberInt(7);

    //Crear objeto
    Number<double> numberDouble(7.7);


    cout << "int Number = " << numberInt.getNum() << endl;


    cout << "double Number " << numberDouble.getNum() << endl;

    return 0;
}
