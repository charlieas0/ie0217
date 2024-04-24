#include "Libro.hpp"

// Implementación del constructor de la clase Libro
Libro::Libro(std::string t, std::string a, int anio) : titulo(t), autor(a), anioPublicacion(anio) {}

// Implementación de la sobrecarga del operador "<"
bool Libro::operator<(const Libro& l) const {
    return anioPublicacion < l.anioPublicacion;
}