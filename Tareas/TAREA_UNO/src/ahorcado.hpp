/**
 * @file ahorcado.hpp
 * @version 1.0
 * @date 08/04/2024
 * @author Charlie Arroyo 
 * @brief Funciones de programa.
*/

#ifndef AHORCADO_HPP
#define AHORCADO_HPP

#include <string>
#include<iostream>
// Generando el struct.
/**
 * @brief Ahorcado Estructura del programa de ahorcado.
*/
struct Ahorcado {
    std::string palabra_adivinar;
    std::string est_actual;
    int intentos_max;
    int intentos_actuales;
};

// Declarando las funciones..
/**
 * @brief inicializar Se inicializa el programa
*/
void inicializar(Ahorcado& juego, const std::string palabras[], int numPalabras, int intento_max);
/**
 * @brief AdivinarLetra El usuario adivina o no la palabra
*/
void adivinarLetra(Ahorcado& juego, char letra);
/**
 * @brief verificarAdivinanza
*/
bool verificarAdivinanza(Ahorcado& juego);
/**
 * @brief jugarJuego Funcion para jugarlo
*/
void jugarJuego(Ahorcado& juego);
/**
 * @brief mostrarMenu Muentra el menu en pantalla
*/
void mostrarMenu();
/**
 * @brief menu Menu iterativo
*/
void menu(Ahorcado& juego,int& intentos_maximos, std::string palabras[], int& numPalabras);
#endif 