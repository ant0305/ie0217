// Selection sort en C++
#include <iostream>

/*
El codigo implementa un algoritmo de ordenacion Selection Sort que
organiza un arreglo de enteros de orden ascendente.
*/

using namespace std;

//Funcion para cambiar la posicion
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
    }
    cout << endl;
}

void selectionSort(int array[], int size) {//Implementacion de Selection Sort
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

     //Se selecciona el elemento minimo de cada bucle
     if (array[i] < array[min_idx])
      min_idx = i;
    }

     //Colocar en posicion correcta
     swap(&array[min_idx], &array[step]);
    }
}

int main() {
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  cout << "Sorted array in Acsending Order:\n";
  printArray(data, size);
}