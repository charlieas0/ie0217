#include<iostream>
#include<persona.hpp>

using namespace std;

// codigo fuente.
int main(){
    Persona p("Juan", 25);

    cout << "Nombre: " << p.getNombre() << endl;
    cout << "edad: " <<p.getEdad()<<endl;

    p.setEdad(26);

    cout << "Nueva edad: "<< p.getEdad()<< endl;
    return 0;
}