#include <iostream>

/* 
El programa verifica si el numero es negativo
positivo o cero
*/


using namespace std;

int main() {
    int num;

    cout << "Ingrese un numero entero: ";
    cin >> num;
    //Estructura condicional la cual tiene condicionales en su interio
    if (num != 0) {
        // Condicionales interna
        if (num > 0) {
        cout << "El numero es positivo." << endl;
        } else {
        cout << "El numero es negativo." << endl;
        }
    } else {
        cout << "El numero es 0 y no es ni positivo ni negativo." << endl;
    }
    //Esta linea siempre se imprime porque no depende de ninguna condicion
    cout << "Esta linea siempre se imprime." << endl;

    return 0;
}
