#include <iostream>

/* 
El programa escribe los numeros del 1 al 5
pero ahora usa un ciclo while
*/

using namespace std;

int main() {
    int i = 1;//Variable local
    //ciclo while
    while (i <= 5) {
        cout << i << " ";
        ++i;
    }
return 0;
}