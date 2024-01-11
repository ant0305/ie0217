#include <iostream>
#include <list>

/*
El programa con ayuda de un iterador imprime los numeros 
como se ingresan en la llista enlazada y luego al revez
*/

using namespace std;

int main() {
list<int> nums {1, 2, 3, 4, 5};
//Se inicializa el iterador
list<int>::iterator itr = nums.begin();
cout << "Moving forward: "<< endl;

//Se muestran los elementos como se ingresaron
while (itr != nums.end()) {
    cout << *itr <<", ";
//Se aumenta el iterador
itr++;
}
cout << endl << "Moving backward: " << endl;
//Se muestran los elementos en orden inverso
while (itr != nums.begin()) {
if (itr != nums.end()) {
cout << *itr << ", ";
}
//Se aumenta el iterador 
itr--;
}
cout << *itr << endl;
return 0;
}