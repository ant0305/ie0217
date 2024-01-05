#include <iostream>

/* 
El programa hace multiplicaciones sencillas pero usa
dos funciones con el mismo nombre esto se logra gracias
a que se usa diferente tipo de parametros
*/

using namespace std;

// Primera funcion con un parametro entero
int test(int a) {
    cout << "Valor recibido: " << a << endl;
    return a * 2;
}

// Segunda funcion con un parametro double
float test(double a) {
    cout << "Valor recibido: " << a << endl;
    return a * 1.5;
}

int main() {
    // Ejemplo de uso de las funciones
    int result1 = test(5);
    float result2 = test(3.5);

    // Imprimir resultados
    cout << "Resultado de la primera funcion: " << result1 << endl;
    cout << "Resultado de la segunda funcion: " << result2 << endl;

    return 0;
}
