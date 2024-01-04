#include <iostream>
using namespace std;
//Declara la funcion
int add(int a, int b) {
return (a + b);
}
int main() {
int sum;
// llama a la funcion
sum = add(100, 78);
cout << "100 + 78 = " << sum << endl;
return 0;
}