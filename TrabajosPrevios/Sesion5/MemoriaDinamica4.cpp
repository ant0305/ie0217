#include <iostream>

/*
El programa asigna dinamicamente
memoria paara un objeto, y al final se libera
*/

using namespace std;

class Student {
 private:
  int age;

    public:
    //Se crea el constructor
    Student(): age(12) {}
    void getAge() {
    cout << "Age = "<< age << endl;
    }
};
int main() {

    //Se declara dinamicamente el objeto estudiante 
    Student* ptr = new Student();

    //Se llama a la funcion getAge()
    ptr->getAge();
    
    //Se libera la memoria
    delete ptr;

 return 0;

}