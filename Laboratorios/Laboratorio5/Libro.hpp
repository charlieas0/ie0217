#ifndef LIBRO_HPP
#define LIBRO_HPP
using namespace std;
#include <string>

// definiendo la clase Libro
class Libro {
public:
    string titulo;
    string autor;
    int anioPublicacion;

    // Constructor de la clase Libro
    Libro(std::string t, std::string a, int anio);
    
    // Sobrecarga del operador de comparación "<" para comparar libros por año de publicación
    bool operator<(const Libro& l) const;
};

#endif