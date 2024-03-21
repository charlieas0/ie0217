#include<iostream>
using namespace std;

int main(){
    int var = 5;

    // Declare pointer variable.
    int* pointVar;

    // Store Address of var
    pointVar = &var;

    //print value of var.
    cout << "var = "<< var <<endl;

    // print address of var
    cout << "Address of var(&var) = "<< &var << endl;

    // print pointer pointVAr.
    cout << "pointeVar = "<< pointVar << endl;

    //print the content of the address pointVar Points to
    cout << "Content od the address pointed to by pointeVar(*pointvar) = "<< *pointVar << endl;
    return 0;

}