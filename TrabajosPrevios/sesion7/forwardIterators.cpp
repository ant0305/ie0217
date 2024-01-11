#include <iostream>
#include <forward_list>

/*
El programa va modificando los valores mientras va iterando
al final imprime los numero originales multiplicados por dos
*/

using namespace std;

int main() {
forward_list<int> nums{1, 2, 3, 4};
//Inicializa un iterador
forward_list<int>::iterator itr = nums.begin();
while (itr != nums.end()) {
//Se accede al valor del iterador
int original_value = *itr;
//Se asigna un nuevo valor usando el operador de direccion
*itr = original_value * 2;
//Se mueve el iterador a la proxima posicion
itr++;
}
//Se muestra el contenido
for (int num: nums) {
cout << num << ", ";
}
return 0;
}