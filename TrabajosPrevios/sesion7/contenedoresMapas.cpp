#include <iostream>
#include <map>

/*
El programa llama al contenedor map y hace diferentes operaciones
usandolo
*/

using namespace std;

int main() {
map<int, string> student;
//Se usa el operador [] para agregar elementos 
student[1] = "Jacqueline"; 
student[2] = "Blake";
//Se usa el metodo insert() para introducir elementos 
student.insert(make_pair(3, "Denise")); student.insert(make_pair(4, "Blake"));
//Agregar elementos con claves duplicadas
//Agregando dos elementos con la misma clave hace que se sobreescriba
student [5] = "Timothy"; 
student [5] = "Aaron";
//Ciclo for para imprimir los elementos
for (int i = 1; i <= student.size(); ++i) { 
    cout << "Student[" << i << "]: "<< student[i] << endl;
}
return 0;
}