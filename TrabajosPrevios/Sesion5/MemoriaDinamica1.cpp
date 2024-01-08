#include <iostream>

/*
El programa imprime unas variables que se 
guardan en diferentes partes de la memoria.
*/

int globalVariable = 42;// Se almacena en el segmento de data.

int main() {

//Se almacena en el stack
int stackVariable = 10;

//Se almacena en el heap
int* heapVariable = new int(20);

std::cout << "Valor de globalvariable: "<< globalVariable << std::endl; 
std::cout << "Valor de stackVariable: " << stackVariable << std::endl;
std::cout << "Valor de heapVariable: "<< *heapVariable << std::endl;

//Se libera la memoria asignada en el heap. 
delete heapVariable;
return 0;
}