#include<iostream>
#include<stdexcept>
using namespace std;


int main(){
int  numerator, denominator, resultado;

cout << "Enter numerator: ";
cin >> numerator;

cout << "Enter denoinator: ";
cin >> denominator;

try{
    // throw an exception if denominatos is 0
    if(denominator == 0)
    throw runtime_error("error el denominador no puede ser 0");
    resultado = numerator / denominator;
    cout << "el resultado es: " << resultado << endl;

}
catch(const exception& e){
    cerr << e.what() << endl;
}
}