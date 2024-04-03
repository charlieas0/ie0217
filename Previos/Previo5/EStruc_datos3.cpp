#include<iostream>
#include<stdlib.h>

using namespace std;

#define MAX 100 // Definir el tamaño máximo del array

// Define la estructura st
struct st {
    int top;
    int items[MAX]; // Definir un array para almacenar elementos de la pila
};

// Prototipos de las funciones
void createEmptyStack(st *s);
void printStack(st *s, int size);
void push(st *s, int newitem, int &size);
void pop(st *s, int &size);
int isfull(st *s);
int isempty(st *s);

// Crear una pila vacía
void createEmptyStack(st *s){
    s->top = -1;
}

// Imprimir la pila
void printStack(st *s, int size){
    cout << "stack: ";
    for (int i = 0; i < size; i++){
        cout << s->items[i] << " ";
    }
    cout << endl;
}

// Comprobar si la pila está llena
int isfull(st *s){
    return (s->top == MAX - 1);
}

// Comprobar si la pila está vacía
int isempty(st *s){
    return (s->top == -1);
}

// Añadir elemento a la pila
void push(st *s, int newitem, int &size){
    if (isfull(s)){
        cout << "Stack FULL" << endl;
    } else {
        s->top++;
        s->items[s->top] = newitem;
        size++;
    }
}

// Eliminar elemento de la pila
void pop(st *s, int &size){
    if (isempty(s)){
        cout << "Stack EMPTY" << endl;
    } else {
        cout << "Item popped = " << s->items[s->top] << endl;
        s->top--;
        size--;
    }
}

// Función principal
int main(){
    st *s = (st *) malloc(sizeof(st)); // Reservar memoria para la pila
    int size = 0; // Tamaño de la pila

    createEmptyStack(s); // Crear una pila vacía

    // Operaciones en la pila
    push(s, 1, size);
    push(s, 2, size);
    push(s, 3, size);
    push(s, 4, size);

    printStack(s, size); // Imprimir la pila

    pop(s, size); // Eliminar un elemento de la pila
    cout << "\nAfter popping out\n";
    printStack(s, size); // Imprimir la pila después de eliminar un elemento

    return 0;
}