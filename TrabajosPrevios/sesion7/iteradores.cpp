#include <iostream>
#include<vector>

/*
El programa usa en iterador para imprimir una cadena los elementos 
*/

using namespace std;

int main() {
vector <string> languages = {"Python", "C++", "Java"};
//Se crea un iterador
vector<string>::iterator itr;
//Se itera sobre todos los elementos
for (itr = languages.begin(); itr != languages.end(); itr++) { cout << *itr << ", ";
}
return 0;
}