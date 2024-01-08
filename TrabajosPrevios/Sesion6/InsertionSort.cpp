// Insertion sort en C++
#include <iostream>

/*
El codigo implementa un algoritmo de ordenacion Insertion Sort para
ordenar un arreglo de numeros enteros en orden ascedente
*/

using namespace std;

//Funcion para el arreglo
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
      cout << array[i] << " ";
    }
    cout << endl;
}
void insertionSort(int array[], int size) {//Implementacion de Insertion sort
  for (int step = 1; step < size; step++) {
   int key = array[step];
   int j = step - 1;

//Comparando la llave para acomodar el arreglo
//Si se necesita en orden desendente se puede cambiar key<array[j] a key>array[j].
while (key < array[j] && j >= 0) {
       array[j + 1] = array[j];
       --j;
      }
      array[j + 1] = key;
    }
}

int main() {
    int data[] = {9, 5, 1, 4, 3};
    int size = sizeof(data) / sizeof(data[0]); 
    insertionSort(data, size);
    cout << "Sorted array in ascending order:\n";
    printArray(data, size);
}