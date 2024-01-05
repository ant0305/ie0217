#include <iostream>

/*
El programa hace operaciones sencillas con punteros
pero usa la flecha(->) porque es mas ordenado y legible 
*/

using namespace std;

struct Distancia {//Se crea una estructura
    int pies;
    float pulgadas;
};

int main() {
    // Variable y puntero.
    Distancia *ptr, d;
    ptr = &d;

    cout << "Ingrese pies: ";
    cin >> ptr->pies;
    cout << "Ingrese pulgadas: ";
    cin >> ptr->pulgadas;

    cout << "Mostrando informacion." << endl;
    cout << "Distancia " << ptr->pies << " pies " << ptr->pulgadas << " pulgadas";

    return 0;
}
