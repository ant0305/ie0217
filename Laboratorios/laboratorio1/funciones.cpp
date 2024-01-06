#include "funciones.hpp"
#include <iostream>

#include <string>

void mostrarMenu(){
    std::cout << "\n Menu ";
    std::cout << "\n 1.Agregare empleados ";
    std::cout << "\n 2.lista de empleados ";
    std::cout << "\n 3.Eliminar empleado ";
    std::cout << "\n 4.Salir \n";
    
    

}

void procesarOpcion(Empleado empleados[],int& numEmpleados){
    int opcion;
    std::cout << "Ingrese una opcion";
    std::cin >> opcion;


    switch (opcion)
    {
    case 1://Agregar empleados
        agregarEmpleado(empleados, numEmpleados);
    case 2://Lista empleados
        listarEmpleados(empleados, numEmpleados);
    case 3://Eliminar empleados
        eliminarEmpleado(empleados, numEmpleados);
    case 4://Salir
        std::cout << "Saliendo del programa";
        exit(0);
        break;
    
    default:
      std::cout << "Opcion no valida ingrese de nuevo...\n";
    }



}

void agregarEmpleado(Empleado empleados[],int& numEmpleados){
if (numEmpleados < MAX_EMPLEADOS){

    Empleado nuevoEmpleado;

    nuevoEmpleado.id= numEmpleados + 1;
    std::cout << "Ingrese el nombre del empleado: ";
    std::cin>>nuevoEmpleado.nombre;


    std::cout << "Ingrese el saladio del empleado \n";
    std::cin>>nuevoEmpleado.salario;

} else{

    std::cout << "No se puede agregar mas, limite alcanzado. \n";
}


}


void  listarEmpleados(const Empleado empleados[], int& numEmpleados){
std::cout << "Lista de Empleados ";

for (int i=0; i < numEmpleados; ++i){
    std::cout << "ID: " << empleados[i].id << ", Nombre: " <<
    empleados[i].nombre<<"Salario: "<<empleados[i].salario<<"\n";

}

}

void eliminarEmpleado(Empleado empleados[], int& numEmpleados){
int idEliminar;

std::cout << "Ingrese el ID a eliminar: ";
std::cin >>idEliminar;
for (int i = 0; i < numEmpleados;++i){
    if (empleados[i].id == idEliminar){
        for (int j = i; j < numEmpleados -1;++j){
            empleados[j]=empleados[j+1];
        }
        --numEmpleados;
        std::cout << "Empleado eliminado con exito.\n";
        return;
    }

}
}