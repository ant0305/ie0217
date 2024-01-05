#include <iostream>

/*
El programa muestra la direccion de cada elemento usando
arreglos y punteros
*/

using namespace std;

int main() {
float arreglos[3];
//Declara variable puntero
float *ptr;
cout << "Mostrar direccion usando arreglos: " << endl;
//Usar el bucle para imprimir las direcciones de los elementos
for (int i = 0; i < 3; ++i) {
cout << "&arreglo[" << i << "] = " << &arreglos[i] << endl;
}
// ptr = &arr[0]
ptr = arreglos;
cout<<"\nMostrar direccion usando punteros: "<< endl;
//Se usa un bucle for
for (int i = 0; i < 3; ++i) {
cout << "ptr + " << i << " = "<< ptr + i << endl;
}
return 0;
}