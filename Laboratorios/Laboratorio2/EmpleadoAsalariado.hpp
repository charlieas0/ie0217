// evitar la inclusión múltiple del archivo de encabezado.
#ifndef EMPLEADOASALARIADO_HPP 
// EMPLEADOASALARIADO_HPP para evitar la inclusión múltiple del archivo de encabezado.
#define EMPLEADOASALARIADO_HPP 

// Incluyendo el archivo de encabezado Empleado.hpp para poder heredar de la clase Empleado.
#include "Empleado.hpp" 

// Declaración de la clase EmpleadoAsalariado que hereda de la clase Empleado.
class EmpleadoAsalariado : public Empleado{
    public:
        // Declaración del constructor de la clase.
        EmpleadoAsalariado(std::string _nombre, int _edad, double _salario);
        
        // Declaración del método para calcular el pago del empleado asalariado.
        double calcularPago() const override; // Sobrescribe el método virtual puro de la clase base Empleado.
};

#endif // Fin