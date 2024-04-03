#include<iostream>
#include<stdlib.h>

using namespace std;

// Define the structure st
struct st {
    int top;
    int items[100]; // Defining an array to store stack items
};

// Check if the stack is empty
int isempty(st *s) {
    if (s->top == -1)
        return 1;
    else 
        return 0;
}

// Check if the stack is full
int isfull(st *s) {
    if (s->top == 99) // Assuming stack size is 100
        return 1;
    else 
        return 0;
}

// Add element into stack
void push(st *s, int newitem) {
    if (isfull(s))
        cout << "Stack FULL";
    else {
        s->top++;
        s->items[s->top] = newitem;
    }
}

// Remove element from stack
void pop(st *s) {
    if(isempty(s)){
        cout << "\n STACK EMPTY \n";
    } else {
        cout << "Item popped= " << s->items[s->top];
        s->top--;
    }
}

int main() {
    // Testing stack functions
    st stack;
    stack.top = -1; // Initializing stack top to -1 to indicate an empty stack

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    pop(&stack);
    pop(&stack);
    pop(&stack);
    pop(&stack); // Trying to pop from an empty stack

    return 0;
}