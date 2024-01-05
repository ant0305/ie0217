#include <iostream>

/*
El programa utiliza definiciones para mantener el codigo
oredenado y legible.
Tambien se obtiene la direccion de memoria de una variable en el sistema 
*/
int var=10;
using namespace std;

#define BOOK_ID_MAX 10
int main() {
    cout <<"direccion de una variable "<<&var<< endl;
    //El valor de BOOK_ID_MAX es PRE-compila.
    cout << "El valor de Book ID Max es: "<< BOOK_ID_MAX << endl;
return 0;
}