#include <iostream>
using namespace std;
int main() {
//Inicializacion de la variable decimal
double num_double = 3.56;
cout << "num_decimal = "<< num_double << endl;
//Conversion estilo C
int num_int1 = (int)num_double;
cout << "num_int1 = " << num_int1 << endl;
//Conversion a un entero con un metodo similar a la nomenclatura de una funcion
int num_int2 = int(num_double);
cout << "num_int2 = "<< num_int2 << endl;
return 0;
}