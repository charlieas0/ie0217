#include <iostream>
#include "estudiante.hpp"

// Constructor de la clase Estudiante
Estudiante::Estudiante(
    const std::string& nombre, int edad
    ): nombre(nombre), edad(edad) {}

// Método para mostrar los datos del estudiante
void Estudiante::mostrarDatos() {
    std::cout << "name: " << nombre;
    std::cout << ", age: " << edad << std::endl;
}
