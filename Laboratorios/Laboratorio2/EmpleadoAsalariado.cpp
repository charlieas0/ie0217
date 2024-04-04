/* Incluyendo el archivo de encabezado EmpleadoAsalariado.hpp 
que contiene la declaración de la clase EmpleadoAsalariado.*/
#include "EmpleadoAsalariado.hpp" 


// Implementación del constructor de la clase EmpleadoAsalariado.
EmpleadoAsalariado::EmpleadoAsalariado(std::string _nombre, int _edad, double _salario)
// Inicializa la clase base Empleado con los valores proporcionados.
    : Empleado(_nombre, _edad, _salario){} 

// Implementación del método para calcular el pago del empleado asalariado.
// Recordar que debe ejecutarse siempre en las clases hijas.
double EmpleadoAsalariado::calcularPago() const{
    return salario; // Devuelve el salario del empleado asalariado.
}