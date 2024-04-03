/*
Charlie Arroyo
B90765
UCR

*/

#ifndef AHORCADO_HPP
#define AHORCADO_HPP

#include <string>
#include<iostream>
// Generando el struct.
struct Ahorcado {
    std::string palabra_adivinar;
    std::string est_actual;
    int intentos_max;
    int intentos_actuales;
};

// Declarando las funciones.
void inicializar(Ahorcado& juego, const std::string palabras[], int numPalabras, int intento_max);
void adivinarLetra(Ahorcado& juego, char letra);
bool verificarAdivinanza(Ahorcado& juego);
void jugarJuego(Ahorcado& juego);
void mostrarMenu();
void menu(Ahorcado& juego,int& intentos_maximos, std::string palabras[], int& numPalabras);
#endif 