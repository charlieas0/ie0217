#include<iostream>
using namespace std;

// function with 2 parameters.
void display(int var1, double var2){
    cout << "Integer number: " << var1;
    cout << "and doble number: " << var2;

}

void display(double var){
    cout << "Double number: "<<var;

}

void display(int var){
    cout << "integer number: "<<var;

}


int main(){
    int a = 5;
    double b = 5.5;
    //call function witg int type parameter
    display(a);
    //call function with double type parameter
    display(b);
    //call function with 2  parameter
    display(a, b);
    \
    return 0;

}