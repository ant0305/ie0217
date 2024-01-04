#include <iostream>

/* 
El programa imprime cada argumento que hay
*/

int main(int argc, char* argv[]) {
std::cout << "Numero de argumentos: " << argc << std::endl;
std::cout << "Nombre del programa: " << argv[0] << std::endl;
//Se crea un buclo por si hay argumentos adicionales
if (argc > 1) {
std::cout << "Argumentos adicionales:" << std::endl;
for (int i = 1; i < argc; ++i) {
std::cout << "argv[" << i << "]: " << argv[i] << std::endl;
}
}
return 0;
}