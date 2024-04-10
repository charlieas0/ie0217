#include "PaisEnDesarrollo.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>


// Constructor 
PaisEnDesarrollo::PaisEnDesarrollo(int id, int pop, bool tiene5G, std::string nomb)
    : Pais(id, pop), tecnologia5G(tiene5G), nombre(nomb) {}


// Metodo para generar el pib
void PaisEnDesarrollo::generarPIB() {
    srand(time(NULL));
    int pib = rand() % 1000 + 1;
    std::cout << "PIB generado para país en desarrollo (" << identificador << "): $" << pib << " millones." << std::endl;
}


// Obtener el nombre del pais
std::string PaisEnDesarrollo::getNombre() const {
    return nombre;
}

// determinar si es primer mundo
bool PaisEnDesarrollo::esPrimerMundo() const {
    return false;
}


//  metodo para saber si tiene tecnologia 5g
bool PaisEnDesarrollo::tieneTecnologia5G() const {
    return tecnologia5G;
}


// SI el pais cuenta con centro de insvestigacion
bool PaisEnDesarrollo::tieneCentroInvestigacion() const {
    return false;
}

// Obtener pib
int PaisEnDesarrollo::getPIB() const {
    srand(time(NULL));
    return rand() % 1000 + 1;
}