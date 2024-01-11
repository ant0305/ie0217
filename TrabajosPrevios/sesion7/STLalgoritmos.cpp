//Ejemplo de algoritmo sort
#include <iostream> // std::cout
#include <algorithm>// std::sort
#include <vector>// std::vector

/*
El programa muestra el uso del algoritmo sort de 
diferentes maneras
*/

//Funciones de comparacion
bool myfunction (int i, int j) { return (i<j); }
struct myclass {
bool operator() (int i, int j) { return (i<j);}
} myobject;

int main () {
int myints[] = {32,71,12,45, 26, 80,53,33};//Se crea un arreglo
std::vector<int> myvector (myints, myints+8);//Se crea un vector

//Compara los primeros 4 numeros y los ordena
std::sort (myvector.begin(), myvector.begin()+4);

//Usa la funcion para compara el resto de numeros
std::sort (myvector.begin()+4, myvector.end(), myfunction);

//Utiliza el operador de comparacion para ordenar el vector completo
std::sort (myvector.begin(), myvector.end(), myobject);

//Muestra el contenido
std::cout << "myvector contains:";
for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
std::cout << ' ' << *it;
std::cout << '\n';
return 0;
}