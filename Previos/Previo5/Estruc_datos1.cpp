#include<iostream>
using namespace std;
#include<stdlib.h>
#define MAX 10

int size = 0;

//creating a stack
struct stack{
    int items[MAX];
    int top;

};

typedef struct stack st;

void createEmtyStack(st *s){
    s -> top = -1;
}

// Check if the stack is full
int isfull(st *s){
    if(s-> top == MAX - 1)
    return 1;
    else 
    return 0;
}






