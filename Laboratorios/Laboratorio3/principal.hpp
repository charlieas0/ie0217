#ifndef LIBRERIA_HPP
#define LIBRERIA_HPP

#include<iostream>
#include<string>

using namespace std;

// Estructura para representar un libro
struct Libro{
    string titulo;
    string autor;
    string genero;
    Libro* siguiente; // Puntero al siguiente libro en la lista
};

// Enumeración para las opciones del menú
enum opciones{
    AGREGAR_LIBRO =1,
    MOSTRAR_LIBRO =2,
    SALIR = 3,
    OPCIONES_MAX
};

// Declaraciones de funciones
void agregarLibro(Libro*& lista); // Agrega un libro a la lista
void mostrarLibros(Libro* lista); // Muestra todos los libros en la lista
void liberarMemoria(Libro*& lista); // Libera la memoria asignada a la lista de libros

#endif