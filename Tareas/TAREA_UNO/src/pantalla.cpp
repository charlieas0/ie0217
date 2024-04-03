/*
Charlie Arroyo
B90765
UCR

*/
#include "pantalla.hpp"
#include <iostream>

// Generando una funcion para limpiar la pantalla.
void limpiar() {
    if (system("clear") == -1) {
        std::cout << "Error al limpiar pantalla." << std::endl;
    }
}

//generando una pausa.
void espera() {
    std::cout << "Presione enter para volver al menú...";
    std::cin.ignore();
    std::cin.get();
}