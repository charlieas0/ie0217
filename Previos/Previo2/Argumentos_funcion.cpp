#include<iostream>
using namespace std;

// Generando la funcion.
void displaynum(int n1, float n2){
    cout << "the int number is " << n1;
    cout << " \n";
    cout << "the float number is " << n2;
    cout << " \n";
}

int main(){

    int num1 = 5;
    double num2 =5.5;

    //calling function
    displaynum(num1,num2);

    return 0;
}