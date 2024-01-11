#include <iostream>
#include <stack>

/*
El programa crea una pila y hace diferentes operaciones usandola
*/

using namespace std;

int main() {
//Se crea una pila de entradas
stack<int> numbers;
//Ingresar elementos
numbers.push(1); 
numbers.push(100); 
numbers.push(10);
cout << "Numbers are: ";
//Se crea un bucle para imprimir los elementos hasta que la pila este vacia  
while(!numbers.empty()) {
//Imprime el elemento superior
cout << numbers.top() << " ";
//Se elimina ese elemento
numbers.pop();
}
return 0;
}