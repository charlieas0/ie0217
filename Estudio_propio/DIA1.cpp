#include <iostream> 
// libreria principal
#include <iomanip>
using namespace std; 

// Tipos de datos basicos de c++


//programa principal.

int main(){

    // Numero entero
    int num = 10; // voy asignarle un espacio en memoria como 15.
    // Para numero flotantes, es decir con decimales, se tiene float
    float flotante = 10.1532023;
    /*double es casi igual al flotante, 
    pero en este caso se pueden hacer para numeros extensos, porque float solo imprime 4decimales,este nmuestra5*/
    long double mayores_decimales;
    // para molsstrar en pantalla se utiliza cout.
    // si se desea mayor precision se puede usar la libreria iomanip
    mayores_decimales = 2.123431321111;

    // existen de tipo char, que es para caracteres.
    char k = 'h';



    cout<< num << std::endl; 

    cout << flotante << std:: endl;
    cout <<std::setprecision(10)  << mayores_decimales << std::endl;
    cout << k<< endl;


    return 0;

}
