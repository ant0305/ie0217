#include <iostream>
#include <cstdlib>

/*
El programa asigna dinamicamente memoria para un arreglo usando
malloc, y luego se redimenciona la memoria usando realloc, imprime 
unos valores en pantalla
*/

using namespace std;

int main() {
float *ptr, *new_ptr;
ptr = (float*) malloc(5* sizeof(float));
if(ptr == NULL) {
cout << "Memory Allocation Failed";
exit(1);
}

//Iniciando bloque de memoria 
for (int i = 0; i < 5; i++) {
ptr[i] = i * 1.5;
}

//Reasignando memoria
new_ptr = (float*) realloc(ptr, 10 *sizeof(float));
if(new_ptr == NULL) {
cout << "Memory Re-allocation Failed";
exit(1);
}

//Inicializando bloque de memoria
for (int i = 5; i < 10; i++) {
new_ptr[i] = i * 2.5;
}

cout << "Printing Values" << endl;
for (int i = 0; i < 10; i++){
cout << new_ptr[i] << endl;
}

free(new_ptr);//Se libera la memoria

return 0;
}