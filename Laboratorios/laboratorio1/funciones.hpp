#ifndef Funcion_HPP
#define Funcion_HPP
#include <string>
#include <iostream>

const int MAX_EMPLEADOS = 10;

struct Empleado
{
    int id;
    std::string nombre;
    double salario;
};


void mostrarMenu();
void procesarOpcion(Empleado empleados[],int& numempleados);
void agregarEmpleado(Empleado empleados[],int& numempleados);
void listarEmpleados(const Empleado empleados[],int& numempleados);
void eliminarEmpleado(Empleado empleados[],int& numempleados);



#endif