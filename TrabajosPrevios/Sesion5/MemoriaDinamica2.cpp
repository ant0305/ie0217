#include <iostream>

/*
El programa asigna memoria dinamicamente a unas variables
y luego libera esa memoria
*/

using namespace std;

int main() {
    //Declara un entero puntero
    int* pointInt;

    //Declara un float puntero
    float* pointFloat;

    //Se asigna memoria dinamicamente 
    pointInt = new int;
    pointFloat = new float;

    //Se asigna un valor a la memoria
    *pointInt = 45;
    *pointFloat = 45.45f;

    cout << *pointInt << endl;
    cout << *pointFloat << endl;

    //Se libera la memoria
    delete pointInt;
    delete pointFloat;

  return 0;
}