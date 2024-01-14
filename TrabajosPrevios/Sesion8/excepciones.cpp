#include <iostream>

/**
 * @file main.cpp
 * @brief Programa que utiliza excepciones aumentar la efectividad del codigo
 *
 * Este programa utiliza manejo de errores para crear un codigo robusto y
 * que no hagan fallar todo el programa
 *
 * @author ant0305
 * @date 13/01/2024
 */

using namespace std;



int main() {
double numerator, denominator, divide;
cout << "Enter numerator: ";
cin >> numerator;
cout << "Enter denominator: ";
cin >> denominator;
try {
//Lanzar una excepcion si el denominador es 0
if (denominator == 0)
throw 0;
//Esta parte no se ejecutara si el denominador es cero
divide = numerator / denominator;
cout << numerator << "/" << denominator << " = " << divide << endl;
}
//Se atrapa la excepcion si el denominador es cero
catch (int num_exception) {
cout << "Error: Cannot divide by "<< num_exception << endl;
}
return 0;
}