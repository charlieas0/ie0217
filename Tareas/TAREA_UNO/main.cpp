/*
Universidad de Costa Rica.
Charlie Arroyo Sanchez.
B90765.
IE0217
Fecha de entrega: 03/04/24.
Tarea #1.
*/

// ------------------------------------------
//---------------Descripcion-----------------
// ------------------------------------------

/*
Mediante esta tarea se desea emplear un juego de
ahorcardo utilizando los conceptos de programación de 
C++ utilizando las diferentes herramientas vistas 
en clases, como punteros estructuras, funciones...
*/
#include <iostream>
#include "ahorcado.hpp"
#include "pantalla.hpp"

int main() {
    int intentos_maximos = 7; // Definir intentos máximos predeterminados
    const int max_palabras = 100; // Definir el máximo de palabras que se pueden almacenar
    std::string palabras[max_palabras] = {"carro", "rick", "morty", "bojack", "elefante", "piloto", "celular"};
    int numPalabras = 7; // Número inicial de palabras
    
    Ahorcado juego; // instancia de juego
    
    // Creando juego
    inicializar(juego, palabras, numPalabras, intentos_maximos); 
    
    menu(juego, intentos_maximos, palabras, numPalabras); // Se pasa la instancia de juego como parámetro

    // Imprimir la palabra a adivinar 
    std::cout << "Palabra a adivinar: " << juego.palabra_adivinar << std::endl;
    std::cout << "Estado actual: " << juego.est_actual << std::endl;
    std::cout << "Intentos máximos permitidos: " << juego.intentos_max << std::endl;
    std::cout << "Intentos actuales realizados: " << juego.intentos_actuales << std::endl;

    return 0;
}