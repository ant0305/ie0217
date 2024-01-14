#include <iostream>
#include <stdexcept>

/**
 * @file main.cpp
 * @brief Programa hace una division simple pero implementa manejo de excepciones
 *
 * Este programa se encarga de realizar un division sencilla y ademas de eso
 * implementa manejo de errores para hacer un codigo mas robusto y que se puede 
 * ir actualizando con el paso del tiempo
 *
 * @author ant0305
 * @date 13/01/2024
 */


using namespace std;


int main() {
int numerador, denominador, resultado;
cout << "Ingrese el numerador: ";
cin >> numerador;
cout << "Ingrese el denominador: ";
cin >> denominador;
try {
    //Lanza una excepcion si el denominador es cero
if (denominador == 0) {
throw runtime_error("Error: el denominador no puede ser cero.");
}
//No se muestra si el denominador es cero
resultado = numerador / denominador;
cout << "El resultado es: "<< resultado << endl;
//Se captura el error
} catch (const exception& e) {
//Se un cerr para imprimir un error    
cerr << e.what() << endl;
}
return 0;
}