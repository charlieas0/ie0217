// Incluye el archivo de encabezado Empleado.hpp, contiene la declaración de la clase Empleado.

#include "Empleado.hpp" 
#include <iostream> 
// Definición del constructor de la clase Empleado.
Empleado::Empleado(std::string _nombre, int _edad, double _salario):
// Inicializa los miembros de datos de la clase Empleado con los valores pasados como parámetros.
    nombre(_nombre), edad(_edad), salario(_salario){} 
// Definición de la función miembro mostrarDetalle().
void Empleado::mostrarDetalle() const{
    std:: cout << "Nombre: " << nombre << std::endl; 
    std:: cout << "edad: " << edad << std::endl; 
    std:: cout << "salario: " << salario << std::endl; 
}
