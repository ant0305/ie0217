#include <iostream>

/*
El programa intercambia de posicion dos numeros usando 
sus direcciones de memoria
*/

using namespace std;
//Definimos una funcion para intercambiar valores
void swap(int &n1, int &n2) {
    cout<<n1;
int temp;
temp = n1;
n1 = n2;
n2 = temp;
}
int main() {
//Inicializaacion de variables
int a = 1, b = 2;
cout << "Antes de cambiar" << endl;
cout << "a = " << a << endl;
cout << "b = " << b << endl;
//LLamanos una funcion para intercambiar los valores
swap(a, b);
cout << "\nDespues de cambiar" << endl;
cout << "a = " << a << endl;
cout << "b = " << b << endl;
return 0;
}