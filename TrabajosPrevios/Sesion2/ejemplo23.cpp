#include <iostream> 

/* 
El programa muestra si un numero es entero o decimal usando una funcion 
con los mismos nombres pero con diferente cantidad de parametros
*/

using namespace std;
//Funcion con dos parametros
void display(int var1, double var2) {
cout << "Numero entero: "<< var1<< endl;
cout << "Numero decimal: "<< var2 << endl;
}
//Funcion con parametro decimal
void display(double var) {
cout << "Numero decimal: " << var << endl;
}
//Funcion con parametro entero
void display(int var) {
cout << "Numero entero: "<< var << endl;
}
int main() {
int a = 5;
double b = 5.5;
//Llamar a la funcion con dos parametros
display (a, b);
return 0;
}