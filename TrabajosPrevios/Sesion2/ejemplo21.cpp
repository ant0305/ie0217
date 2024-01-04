#include <iostream>

/* 
El programa hace una suma sencilla pero
se usa la funcion prototipo
*/

using namespace std;
//Funcion prototipo
int add(int, int);
int main() {
    int sum;
//Llamando a al funcion
sum = add(100, 78);
cout << " 100 + 78 = " << sum << endl;
return 0;
}
// function definition
int add(int a, int b) { return (a + b);
}