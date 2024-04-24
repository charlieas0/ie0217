#include<iostream>
#include<stdexcept>
using namespace std;


int main(){
int  numerator, denominator, resultado;

cout << "Enter numerator: ";
cin >> numerator;

cout << "Enter denoinator: ";
cin >> denominator;

resultado = numerator / denominator;

cout << "el resultado es: " << resultado << endl;

return 0;
}

