//Implementacion de la cola
#include <iostream>
#define SIZE 5

/*
El codigo implementa una cola le agrega y le
quita elementos y muestra su estado
*/

using namespace std;

class Queue {
private:
    int items[SIZE];
    int front, rear;

public:
    Queue() {
    front = -1;
    rear = -1;
    }

    bool isFull() {
    return (front == 0 && rear == SIZE - 1);
    }

    bool isEmpty() {
    return (front == -1);
    }

    void enQueue(int element) {
        if (isFull()) {
        cout << "Queue is full" << endl;
        } else {
        if (front == -1) front = 0;
        rear++;
        items[rear] = element;
        cout << endl << "Inserted " << element << endl;
        }
    }

    int deQueue() {//Elimina un elemento de la cola
    int element;
     if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return (-1);
        } else {
        element = items[front];
         if (front >= rear) {
            front = -1;
            rear = -1;
            } //Reiniciamos la cola
            else {
            front++;
            }
        cout << endl << "Deleted -> " << element << endl;
            return (element);
        }
    }

void display() {
    //Funcion para mostrar elementos
    int i;
    if (isEmpty()) {
        cout << endl << "Empty Queue" << endl;
    } else {
        cout << endl << "Front index-> " << front;
        cout << endl << "Items -> ";
        for (i = front; i <= rear; i++)
            cout << items[i] << " ";
        cout << endl << "Rear index-> " << rear << endl;
}
}
};

int main() { 
Queue q;

//deQueue no es posible en una cola  vacia 
q.deQueue();

//enQueue 5 elementos
q.enQueue(1); 
q.enQueue(2); 
q.enQueue(3); 
q.enQueue(4); 
q.enQueue(5);

//No se puede agregar otro elemento porque la cola esta llena 
q.enQueue(6);
q.display();

//Se elimina un elemento
q.deQueue();

//Muestra cuantos elementos que hay 
q.display();

return 0;
}