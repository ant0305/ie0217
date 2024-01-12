#include <iostream>
using namespace std;


int variableGlobal = 10;
void funcionGlobal(){
  //Data section
    static int variableGlobalEstatica = 5;
//stack section
    int variableLocal = 5;
    //Mostrar
    cout << "Variable global" << variableGlobal;
    cout << "Variable local estatica" << variableGlobalEstatica;
    cout << "Variable local" << variableLocal;
}
int main(){
   int variableLocal=15;

   funcionGlobal();

       cout << "Variable local en main" << variableLocal << endl;
        //head section
       int* variableDinamica = new int;
       *variableDinamica = 25;
       cout << "Variable Dinamica" << *variableDinamica << endl;

       delete variableDinamica;
    return 0;
}