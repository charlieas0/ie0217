#include "Biblioteca_libros.hpp"
#include<iostream>

using namespace std;

int main() {
    // Creación de una instancia de Biblioteca
    Biblioteca miBiblioteca;
    
    // Agregar libros a la biblioteca
    miBiblioteca.agregarLibro({"Cien años de soledad", "Gabriel García Márquez", 1967});
    miBiblioteca.agregarLibro({"1984", "George Orwell", 1949});
    miBiblioteca.agregarLibro({"El señor de los anillos", "J.R.R. Tolkien", 1954});

    // Ordenar los libros por año de publicación
    miBiblioteca.ordenarLibrosPorAnio();

    // Mostrar la lista de libros ordenada
    miBiblioteca.mostrarLibros();

    // Buscar un libro por su título
    auto libro = miBiblioteca.buscarLibroPorTitulo("1984");
    if (libro != miBiblioteca.end()) {
        cout << "Libro encontrado: " << libro->titulo << endl;
    } else {
        cout << "Libro no encontrado." << endl;
    }

    return 0;
}