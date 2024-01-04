#include <iostream>
using namespace std;
struct Person
{
char name [50];
int age;
float salary;
};
int main()
{
Person p1;
cout << "Nombre completo: "; 
cin.get(p1.name, 50);
cout << "Edad: ";
cin >> p1.age;
cout << "Salario: ";
cin >> p1.salary;
cout << "\nDatos ingresada" << endl;
cout << "Nombre: "<< p1.name << endl;
cout <<"Edad: "<< p1.age << endl;
cout << "Salario: "<< p1.salary;
return 0;

}