#include <iostream>

/*
El codigo implementa un algoritmo de ordenacion Quick sort para
ordenar un arreglo de numeros enteros en orden ascedente
*/

using namespace std;

//Funcion para imprimir el arreglo
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

//Funcion para intercambiar dos elementos en un arreglo
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

//Funcion para seleccionar el pivote y organizar los elementos
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1;

    for (int j = low; j < high; j++) {
    if (arr[j] < pivot) {
        i++;
        swap(arr[i], arr[j]);
    }
}

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

//Funcion recursiva para aplicar QuickSort
void quickSort(int arr[], int low, int high) {

    if (low < high) {
       // Obtener el indice del pivote
       int pivotIndex = partition(arr, low, high);

       // Ordenar recursivamente las dos mitades
       quickSort(arr, low, pivotIndex - 1);
       quickSort(arr, pivotIndex + 1, high);
}
}

int main() {
    int data[] = {8, 14, 10, 3, 17};
    int size = sizeof(data) / sizeof(data[0]);

    cout << "Original array: ";
    printArray(data, size);

    quickSort(data, 0, size - 1);

    cout << "Sorted array using QuickSort: ";
    printArray(data, size);

    return 0;
}
