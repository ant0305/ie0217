#include <iostream> 


using namespace std;

//Se crea la funcion
void displayNum(int n1, float n2) {
cout << "El numero entero es: " << n1 << endl;
cout << "El numero flotante es: " << n2;
}
int main() {
int num1 = 5;
double num2 = 5.5;
displayNum(num1, num2);//Se llama a la funcion
return 0;
}