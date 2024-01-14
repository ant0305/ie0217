#include <iostream>
#include <stdexcept>

/**
 * @file main.cpp
 * @brief Programa hace una division simple pero no implementa manejo de excepciones
 *
 * Este programa se encarga de realizar un division sencilla pero por la falta de 
 * manejo de excepciones no llega a ser un codigo robusto.
 *
 * @author ant0305
 * @date 13/01/2024
 */

using namespace std;

int main() { 
    int numerador, denominador, resultado;
//Solicita un numero
cout << "Ingrese el numerador: ";
cin >> numerador;
//Solicta otro numero
cout << "Ingrese el denominador: ";
cin >> denominador;
//Realiza  la division e imprime el resultado.
resultado = numerador / denominador;
cout << "El resultado es: " << resultado << endl;

return 0;
}