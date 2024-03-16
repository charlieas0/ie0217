#include<iostream>
using namespace std;

int main(){
// Generando una variable de tipo caracter.
char oper;
// Generando dos variables de tipo flotante.
float num1, num2;

// al usuario que ingrese la operacion.
cout<<"Please, enter an operator(+, -, *, /): ";
cin >> oper; //guardando en la variable oper.
// Solicitando numeros al usuario.
cout<< "ingrese primer  numero: ";
cin >> num1; // Guardando num1 y num2.
cout<< "ingrese segundo numero: ";
cin >>  num2; // Guardando num1 y num2.
// Evaluando la variable oper, dependiendo de su valor el programa va ejecutar 
// alguna instruccion
switch (oper) {
        case '+': //Si es oper es mas se ejecutan estas instrucciones
            cout << num1 << "+" << num2 << "=" << num1 + num2;
            break;
        case '-':
            cout << num1 << "-" << num2 << "=" << num1 - num2;
            break;
        case '*':
            cout << num1 << "*" << num2 << "=" << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << "/" << num2 << "=" << num1 / num2;
            else
                cout << "Error: División por cero.";
            break;
        default:
            cout << "Sorry, the operator is not correct";
            break;
    }
    return 0;
}primer 