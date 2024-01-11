#include <iostream>
#include <set>

/*
El programa imprime un arreglo usando un contenedor para facilitar 
el proceso la cual es capaz de ordenar los numeros y eliminar los repetidos 
*/

using namespace std;

int main() {
//Inicializar un conjunto de tipo int
set<int> numbers = {1, 100, 10, 70, 100};
//Mostrar el conjunto
cout << "Numbers are: ";
//Imprime el conjunto usando un for basado en rango
for(auto &num: numbers) {
cout << num << ", ";
}
return 0;
}