//Implementacion de una lista enlazada
#include <bits/stdc++.h>
#include <iostream>

/*
El codigo consta de  una lista enlazada con tres nodos
y luego los imprime
*/

using namespace std;

//Creando un nodo
class Node {
    public:
    int value;
    Node* next;
};
int main() {
Node* head;
Node* one = NULL;
Node* two = NULL;
Node* three = NULL;


//Asignacion de nodos
one = new Node();
two = new Node();
three = new Node();

//Asignacion de valores
one->value = 1;
two->value = 2;
three->value = 3;

//Conectar nodos
one->next = two; 
two->next = three; 
three->next = NULL;


//Imprimir el valor de la lista
head = one;
while (head != NULL) {
cout << head->value;
head = head->next;
}
}