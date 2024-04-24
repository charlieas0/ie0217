#ifndef BIBLIOTECA_LIBROS_HPP
#define BIBLIOTECA_LIBROS_HPP

using namespace std;
#include <vector>
#include "Libro.hpp"

class Biblioteca {
private:
    std::vector<Libro> libros;

public:
    // Método para agregar un libro a la biblioteca
    void agregarLibro(const Libro& libro);

    // Método para mostrar la lista de libros en la biblioteca
    void mostrarLibros();

    // Método para ordenar los libros por año de publicación
    void ordenarLibrosPorAnio();

    // Método para buscar un libro por su título
    vector<Libro>::iterator buscarLibroPorTitulo(const std::string& titulo);

    // Método para obtener un iterador al final de la lista de libros
    vector<Libro>::iterator end();
};

#endif 