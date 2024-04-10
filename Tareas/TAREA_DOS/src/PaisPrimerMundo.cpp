#include "PaisPrimerMundo.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

// Constructor de la clase PaisPrimerMundo
PaisPrimerMundo::PaisPrimerMundo(int id, int pop, bool centro, bool tiene5G, std::string name)
    : Pais(id, pop), centroInvestigacion(centro), tecnologia5G(tiene5G), nombre(name) {}

// Método para generar el PIB de un país de primer mundo
void PaisPrimerMundo::generarPIB() {
    srand(time(NULL)); // Inicializar la semilla del generador de números aleatorios
    int pib = rand() % 10000 + 1000; // Generar un número aleatorio entre 1000 y 10000 para el PIB
    // Imprimir el PIB generado para el país de primer mundo
    std::cout << "PIB generado para país de primer mundo (" << identificador << "): $" << pib << " millones." << std::endl;
}

// Método para obtener el nombre del país
std::string PaisPrimerMundo::getNombre() const {
    return nombre; // Devolver el nombre del país
}

// Método para determinar si un país es de primer mundo
bool PaisPrimerMundo::esPrimerMundo() const {
    return true; 
}

// Método para determinar si un país de primer mundo tiene tecnología 5G
bool PaisPrimerMundo::tieneTecnologia5G() const {
    return tecnologia5G; 
}

// Método para determinar si un país de primer mundo tiene un centro de investigación
bool PaisPrimerMundo::tieneCentroInvestigacion() const {
    return centroInvestigacion; 
}

// Método para obtener el PIB de un país de primer mundo
int PaisPrimerMundo::getPIB() const {
    srand(time(NULL)); // Inicializar la semilla del generador de números aleatorios
    return rand() % 10000 + 1000;
}