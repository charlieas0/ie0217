#include "EmpleadoPorHoras.hpp" /*  incluye la declaración de la clase EmpleadoPorHoras.*/

// Implementación del constructor de la clase EmpleadoPorHoras.
EmpleadoPorHoras::EmpleadoPorHoras(std::string _nombre, int _edad, double _salario, int _horasTrabajadas)
    : Empleado(_nombre, _edad, _salario), horasTrabajadas(_horasTrabajadas) {} 
    // Inicializa la clase base Empleado y el miembro horasTrabajadas con los valores proporcionados.

// Implementación del método para calcular el pago del empleado por horas.
// Se emplea siempre, por ser virtual puro.
double EmpleadoPorHoras::calcularPago() const {
    return salario * horasTrabajadas; 
}