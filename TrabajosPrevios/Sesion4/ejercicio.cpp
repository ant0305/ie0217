#include "ejercicio.hpp"

/*
El programa se usa para crear el constructoor de la 
clase student y una funcion
*/

Student::Student(double m) : marks(m) {//Constructor de la clase Student
}

void calculateAverage(Student s1, Student s2) {
    double average = (s1.marks + s2.marks) / 2;
    std::cout << "Average Marks = " << average << std::endl;
}
