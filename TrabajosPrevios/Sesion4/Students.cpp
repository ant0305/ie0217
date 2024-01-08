#include <iostream>

/*
El programa muestra el promedio de calificacion de la nota
de dos estudiantes, pasando objetos como parametros a las
funciones
*/

using namespace std;

class Student {//Se crea una clase
        public://Se crea un acceso
        double marks;

        Student(double m) {
        marks = m;
    }
};
void calculateAverage (Student s1, Student s2) {//Se crea una funcion y se le pasan los parametros
    double average = (s1.marks + s2.marks) / 2;

    cout << "Average Marks = " << average << endl;
}

int main() {
    Student student1 (88.0), student2(56.0);

    calculateAverage (student1, student2);

 return 0;
}