#include "Continente.hpp"
#include <iostream>
// Constructor de la clase Continente que inicializa el nombre del continente
Continente::Continente(const std::string& nombre) : nombre(nombre) {}

// Método para agregar un país al continente
void Continente::agregarPais(Pais* pais) {
    paises.push_back(pais); // Agrega un país al final del vector de países del continente
}

// Método para imprimir información sobre los países en el continente
void Continente::imprimirInformacion() const {
    int paisesPrimerMundo = 0; // Contador de países de primer mundo
    int paisesEnDesarrollo = 0; // Contador de países en desarrollo

    // Imprime el nombre del continente y la cantidad de países que contiene
    std::cout << nombre << " posee " << paises.size() << " países:" << std::endl;
    
    // Itera a través de cada país en el continente
    for (const auto& pais : paises) {
        // Verifica si el país es de primer mundo o en desarrollo
        if (pais->esPrimerMundo()) {
            paisesPrimerMundo++; // Incrementa el contador de países de primer mundo
        } else {
            paisesEnDesarrollo++; // Incrementa el contador de países en desarrollo
        }
    }
    // Imprime la cantidad de países de primer mundo y en desarrollo en el continente
    std::cout << "\t- Países de primer mundo: " << paisesPrimerMundo << std::endl;
    std::cout << "\t- Países en desarrollo: " << paisesEnDesarrollo << std::endl;
}