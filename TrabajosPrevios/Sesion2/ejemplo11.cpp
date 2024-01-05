#include <iostream>

/* 
El programa escribe los numeros del 1 al 10
*/

using namespace std;

int main() {
    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//Se crea un arreglo
    for (int n: num_array) {//Se crea un bucle que recorre el arreglo
        cout << n << " ";
    }
return 0;
}