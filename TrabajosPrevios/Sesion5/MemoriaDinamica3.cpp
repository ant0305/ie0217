#include <iostream>

/*
El programa asigna dinamicamente la memoria a un arreglo
el cual el usuario es el encargado de elegir su tamanio
*/

using namespace std;

int main() {

    int num;
    cout << "Enter total number of students: ";
    cin >> num;
    float* ptr;

    //Asignacion de memoria
    ptr = new float[num];
    cout << "Enter GPA of students." << endl;
    for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << "! ";
    cin >> *(ptr + i);
    }

    cout << "\nDisplaying GPA of students." << endl;
    for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << " : "<< *(ptr + i) << endl;
    }

    //Se libera la memoria
    delete[] ptr;

 return 0;
}