#include <iostream>

/* 
El programa escribe los numeros del 1 al 5
pero ahora usa un ciclo do-while
*/

using namespace std;

int main() {
    int i = 1;//Variable local
    //Se establece un ciclo do-while
    do {
        cout << i << " ";
        ++i;
    }
    while (i <= 5);
return 0;
}