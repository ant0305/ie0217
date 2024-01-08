//Implementacion de la pila
#include <stdlib.h>
#include <iostream>

/*
El codigo implementa una pila le agrega y le
quita elementos y muestra su estado
*/

using namespace std;


#define MAX 10
int size = 0;
//Se crea una pila
struct stack {
int items [MAX];
int top;
};
typedef struct stack st;
void createEmptyStack(st *s) {
s->top = -1;
}
//Se comprueba si al pila esta llena
int isfull(st *s) {
if (s->top == MAX - 1)
return 1;
else
return 0;
}

//Se comprueba si la pila estaba vacia 
int isempty(st *s) {
if (s->top == -1)
return 1;
else
return 0;
}
//Agregar elementos a la pila
void push(st *s, int newitem) {
if (isfull(s)) {
cout << "STACK FULL";
} else {
s->top++;
s->items[s->top] = newitem;
}
size++;
}
//Quitar elemento de laa pila
void pop(st *s) {
if (isempty(s)) {
cout << "\n STACK EMPTY \n";
} else {
cout << "Item popped= "<< s->items[s->top];
s->top--;
}
size--;
cout << endl;
}

//Se imprimen elementos de la pila
void printStack(st *s) {
printf("Stack: ");
for (int i = 0; i < size; i++) {
cout << s->items[i] << " ";
}
cout << endl;
}
//Menu
int main() {
int ch;
st *s = (st *)malloc(sizeof(st));
createEmptyStack(s);
push(s, 1);
push(s, 2);
push(s, 3);
push(s, 4);
printStack(s);
pop(s);
cout << "\nAfter popping out\n";
printStack(s);
}