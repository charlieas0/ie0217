#include<iostream>
using namespace std;

struct Distance{
    int feet;
    float inch;

};

int main(){
    // variable y puntero.
    Distance *ptr,d ;

    ptr =&d;

    cout << "Enter feet: ";
    cin >> ptr->feet;
    cout << "enter inch: ";
    cin >> ptr->inch;
    cout << "Displating information." << endl;
    cout << "DIstance = " << ptr->feet << "feet "<< ptr->inch << "inches";
    return 0;


}