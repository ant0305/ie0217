#include <iostream>

/*
El programa intercambia de posicion dos numeros usando 
sus referencias pero atraves de punteros
*/

using namespace std;

//Funcion para intercambiar valores
void swap(int* n1, int* n2) {
int temp;
temp = *n1;
*n1 = *n2;
*n2 = temp;
}
int main() {
    //Inicializar variables
    int a = 1, b = 2;
    cout << "Antes de cambiar" << endl;
    cout <<"a = "<< a << endl;
    cout << "b= " <<b<< endl;
    //Llamar a la funcion pasando direcciones
    cout << "&a = " << &a << endl;
    cout << "&b = "<< &b << endl;
    swap(&a, &b);
    cout << "\nDespues de cambiar" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
return 0;
}