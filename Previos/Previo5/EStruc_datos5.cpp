#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// creando el nodo
class Node{
    public:
    int value;
    Node* next;
};


int main(){
    Node*head;
    Node*one =NULL;
    Node*two =NULL;
    Node*three =NULL;

    //allocation 3 nodes in the heap
    one = new Node();
    two = new Node();
    three = new Node();

    // asingn values values
    one -> value = 1;
    two -> value = 2;
    three -> value =3;

    //connect nodes
    one ->next = two;
    two ->next = three;
    three ->next = NULL;

    // print the linked list value
    head = one;
    while(head != NULL){
        cout << head ->value;
        head = head ->next;
    }
}