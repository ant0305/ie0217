#include <iostream>

/*
El programa se utiliza un destructor por si el archivo
queda abierto.
*/

#include <fstream>
class Archivo {//Se crea la clase
    private:
        std::fstream archivo;
    public:
        Archivo(std::string nombre_archivo) {
        archivo.open(nombre_archivo, std::ios::in | std::ios:: out | std::ios::app);
        if (!archivo.is_open()) {
            std::cout << "No se pudo abrir el archivo << nombre_archivo "<< std::endl;
    }
    }
        ~Archivo() {//Se crea el destructor
            if (archivo.is_open()) {
            archivo.close();
        }
    }
};
int main() {
Archivo mi_archivo("datos.txt");

return 0;
}