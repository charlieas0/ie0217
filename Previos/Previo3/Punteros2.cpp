#include <iostream>
using namespace std;

int main(){
    int var =5;
    int* pointVar;
    // Store address of var
    pointVar = &var;

    //print var
    cout << "*poinVar = " << var << endl;

    // print *pointerVar.
    cout << "*pointVar = " << *pointVar << endl;

    cout << "Changing value of var to 7:"<< endl;

    // change value of var to 7.
    var = 7;

    //print var 
    cout << "var = "<< var << endl;

    cout << "*pointvar = " << *pointVar << endl
         << endl;
    
    cout << "changing value of *pointVar to 16:" << endl;

    // change value of var to 16.
    *pointVar =16;

    //print var 
    cout << "var =" << *pointVar << endl;
    // print *pointVar
    cout << "*pointVar = " << *pointVar << endl;
    

    return 0;
    
    
}