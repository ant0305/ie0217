#include <iostream>

/*
El programa muestra el promedio de la nota de un estudiante,
la funcion retorna un objeto de 
tipo estudiante para llevar acabo su funcion
*/


using namespace std;

class Student {//Se crea una clase
    public://Se crea un acceso
    double marks1, marks2;
};
Student createStudent() {//Se crea una funcion
    Student student;

    student.marks1 = 96.5;
    student.marks2 = 75.0;

    cout << "Marks 1 = " << student.marks1 << endl;
    cout << "Marks 2 = "<< student.marks2 << endl;

return student;
}
int main() {

    Student student1;

    student1 = createStudent();

return 0;
}