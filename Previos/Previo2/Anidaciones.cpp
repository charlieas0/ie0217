// Charlie A.S.
// B90765.

/*Esto son anidaciones
suceden cuando hay un if dentro de otro if*/
// EJEMPLO:

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Ingrese un numero entero: ";
    cin >> num;

// Outer if condition.
if (num !=0){ // SI num es diferente de cero.
    // inner if condition.
    if (num > 0){
        cout << "The number is positive.\n";
    }
    else {
        cout << " The number is negative.\n";
    
    }
}
else {
    cout<< "The number is 0 and it is neither nor negative.";

}
cout << " Thanks.\n";
return 0;

}