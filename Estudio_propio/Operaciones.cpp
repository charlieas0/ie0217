// Charluie arroyo sanchez
/*EScribe un programaque lea la entrada estandar de dos numeros y muestre en la salida su suma
resta, multiplicacion y division*/

//Libreria estandar.
#include <iostream>

using namespace std;


int main(){
    // declaracion de variables para los operadores
    float resultado;
    float num1, num2;
    int opcion;


    cout << "Ingrese un numero: " << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero: "<< endl;
    cin >> num2;


    
    // Generando un menu.
    cout<< "menu de opciones para realizar operaciones." << endl;
    cout << "1. resta" << endl;
    cout << "2.suma" << endl;
    cout << "3.Division" << endl;
    cout << "4.Multiplicacion" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        resultado = num1 - num2;
        cout << "El reusltado obtenido de la resta es:" << resultado << endl;
        
        break;

    case 2:
        resultado = num1 + num2;
        cout << "EL resultado obtenido de la suma es:" << resultado << endl;
        break;
    case 3:
        resultado =  num1/num2;
        cout << "El resultado de la division es:" << resultado << endl;
        break;
    case  4:
        resultado = num1 * num2;
        cout << "El resultado de la multiplicacion es:" << resultado << endl;
        break;
    default:
        break;
    }




    return 0;
}