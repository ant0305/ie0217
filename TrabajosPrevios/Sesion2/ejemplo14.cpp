#include <iostream>

/* 
El programa escribe impreme la palabra hola 5 veces y 
luego un fin
*/


using namespace std;

int main() {
    for (int i = 0; i < 10; ++i) {
        //Codigo dentro del bucle
        cout << "Hola" << endl;

        //Condición para salir del bucle
        if (i == 5) {
            break;
        }
        //Mas cadigo dentro del bucle
        if (i== 4) {
        cout << "Fin" << endl;
        break;
    }
    }
    return 0;
}
