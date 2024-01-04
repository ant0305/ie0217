#include <iostream>
/*
El programa hace una suma sencilla, pero ahora define una
variable global
*/

using namespace std;

// Global variable:

int g;

int main () {
    // Variable Local:
    int a, b;
    // inicializacion
    a = 10;
    b = 20;
    g = a + b;
    cout << g;
return 0;
}