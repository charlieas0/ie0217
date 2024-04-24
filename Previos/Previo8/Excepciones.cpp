#include<iostream>

using namespace std;


int main(){
double  numerator, denominator, divide;

cout << "Enter numerator: ";
cin >> numerator;

cout << "Enter denoinator: ";
cin >> denominator;

try{
    // throw an exception if denominatos is 0
    if(denominator == 0)
    throw 0;

    divide = numerator / denominator;
    cout << numerator << "/" << denominator << "=" << divide << endl;

}
catch(int num_exception){
    cout << "error: cannot divide by" << num_exception << endl;
}
}