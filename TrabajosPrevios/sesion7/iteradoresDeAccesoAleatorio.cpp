#include <iostream>
#include <vector>

/*
El programa crea un vector y accede a el de diferentes
formas
*/

using namespace std;

int main() {
//Se crea un vector
vector<int> vec {1, 2, 3, 4};
//Se crean iteradores para apuntar al ultimo y primer numero
vector<int>::iterator itr_first = vec.begin();
vector<int>::iterator itr_last = vec.end() - 1;
//Se mestran los elementos del vector
cout << "First Element: "<< *itr_first << endl;
cout << "Second Element: " << itr_first[1] << endl;
cout << "Second Last Element: "<< *(itr_last - 1) << endl;
cout << "Last Element: "<< *(itr_last) << endl;
return 0;
}