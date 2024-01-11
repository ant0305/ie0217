#include <iostream>
#include <unordered_set>

/*
El programa imprime un arreglo usando un contenedor para facilitar 
el proceso la cual es capaz de eliminar los repetidos aunque no
es capaz de ordenarlos
*/

using namespace std;

int main() {
//Inicializar un conjunto desordenado de tipo int
unordered_set<int> numbers = {1, 100, 10, 70, 100};
//Mostrar el conjjunto
cout << "Numbers are: ";
//Muestra el conjunto usando un for basado en rango
for(auto &num: numbers) {
cout << num << ", ";
}
return 0;
}