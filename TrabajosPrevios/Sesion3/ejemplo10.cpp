#include <iostream>

/*
Se hacen operaciones sencillas con punteros
*/

using namespace std;

int main() { 
    int var=5;
    // declarar la variable puntero
    int* pointVar;
    //Almacenar la direcion
    pointVar = &var;
    //Imprimir el valor de var
    cout << "var = " << var << endl;
    //Imprimir la direccion de var
    cout << "Direccion de var (&var) = " << &var << endl << endl;
    //Imprimir el puntero de pointVar
    cout << "pointVar = " << pointVar << endl;
    //Imprimir el contenido de la direccion apuntada por pointVar
    cout << "Contenido de la direcion a la que apunta pointVar (*pointVar) = " << *pointVar << endl;
    return 0;
}