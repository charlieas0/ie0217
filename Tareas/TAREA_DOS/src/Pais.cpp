#include "Pais.hpp"
// Constructor de la clase Pais
Pais::Pais(int id, int pop) : identificador(id), poblacion(pop) {}

// Método para obtener el identificador del país
int Pais::getIdentificador() const {
    return identificador; 
}

// Método para obtener la población del país
int Pais::getPoblacion() const {
    return poblacion; 
}

// Sobrecarga del operador de igualdad para comparar dos países por su identificador
bool Pais::operator==(const Pais& otro) const {
    // Verdadero si son iguales, falso si no.
    return (this->identificador == otro.identificador); 
}