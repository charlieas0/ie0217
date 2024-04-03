#include<iostream>
using namespace std;

class Molde{
    public:
     double largo;
     double ancho;
     double altura;

     Molde(){
        cout << "Esto se ejecuta en cada instanciaciom"<<endl;
        cout << "iniciando un objeto de la clase room"<<endl;
        
     }

     double calcularArea(){
        return largo*ancho;
     }
     double calcularVolumen(){
        return largo * ancho * altura;
     }

};

int main(){
    // instanciar un objeto llamado pared basada en la clase molde.
    Molde pared;

    //asignar valores al objeto pared
    pared.largo = 400.5;
    pared.ancho = 20.8;
    pared.altura = 315,2;

    // Calcular y desplegat el area y volumen.
    cout << "Area = " << pared.calcularArea() << endl;
    cout << "Volumen = " << pared.calcularVolumen() << endl;
    return 0;
    
}