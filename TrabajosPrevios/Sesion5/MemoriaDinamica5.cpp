#include <cstdlib>
#include <iostream>

/*
El programa asigna dinamicamente memoria para 
un arreglo usando la palabra calloc, y al final se libera
*/

using namespace std;

int main() {
    int *ptr;
    ptr = (int*)calloc(5, sizeof(int));
    if (!ptr) {
      cout << "Memory Allocation Failed";
      exit(1);
    }

    cout << "Initializing values..." << endl 
        << endl;
    for (int i = 0; i < 5; i++) {
        ptr[i] = i*2 + 1;
    }

    cout << "Initialized values" << endl;
    for (int i = 0; i < 5; i++) {
       //Se pueden usar ptr[i] and *(ptr+i)
       cout << *(ptr + i) << endl;
    }

    free(ptr);//Se libera la memoria
return 0;
}