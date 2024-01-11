#include <iostream>
#include <vector>

/*
El programa imprime un arreglo usando un contenedor para facilitar 
el proceso
*/

using namespace std;

int main() {
//Inicializar un vector tipo int
vector<int> numbers = {1, 100, 10, 70, 100};
//Mostrar el vector
cout << "Numbers are: ";
//Muestra cada elemento usando un for basado en rango
for(auto &num: numbers) {
cout << num << ", ";
}
return 0;
}