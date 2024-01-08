//Optimizacion bubble sort in C++
#include <iostream>

/*
El codigo implementa el algoritmo de ordenamiento Bubble Sort
el cual ordena un arreglo de menor a mayor
*/

using namespace std;

//Ejecutar bubble sort 
void bubbleSort(int array[], int size) {
    //Bucle para acceder a la matriz
    for (int step = 0; step < (size-1); ++step) {
    //Comprobar si se produce un cambio
       int swapped = 0;
    //Bucle para comparar los elementos e intercambiarlos
        for (int i = 0; i < (size-step-1); ++i) {
 
           if (array[i] > array[i + 1]) {

             int temp = array[i];
             array[i] = array[i + 1];
             array[i + 1] = temp;
             swapped = 1;
        }
        }
        if (swapped == 0)//Salir del bucle
        break;
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
      cout << " " << array[i];
    }
    cout << "\n";
}
int main() {
    int data[] = {-2, 45, 0, 11, -9};

    //Encontrar la longitud de la matriz
    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);

    cout << "Sorted Array in Ascending Order:\n";
    printArray(data, size);
}