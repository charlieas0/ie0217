#include "Biblioteca_libros.hpp"
#include <algorithm>
#include <iostream>

// Implementación del método agregarLibro
void Biblioteca::agregarLibro(const Libro& libro) {
    libros.push_back(libro);
}

// Implementación del método mostrarLibros
void Biblioteca::mostrarLibros() {
    for (const auto& libro : libros) {
        std::cout << libro.titulo << ", " << libro.autor << ", " << libro.anioPublicacion << std::endl;
    }
}

// Implementación del método ordenarLibrosPorAnio
void Biblioteca::ordenarLibrosPorAnio() {
    std::sort(libros.begin(), libros.end());
}

// Implementación del método buscarLibroPorTitulo
std::vector<Libro>::iterator Biblioteca::buscarLibroPorTitulo(const std::string& titulo) {
    return std::find_if(libros.begin(), libros.end(), [&titulo](const Libro& l) {
        return l.titulo == titulo;
    });
}

// Implementación del método end
std::vector<Libro>::iterator Biblioteca::end() {
    return libros.end();
}