#include "persona.hpp"
using namespace std;


// Funciones.
Persona::Persona(string nombre,int edad){
    this ->nombre = nombre;
    this ->edad =  edad;

}

string Persona:: getNombre(){
    return nombre;
}

int Persona::getEdad(){
    return edad;
}

void Persona::setEdad(int edad){
    this ->edad = edad;
}