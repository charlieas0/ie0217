#ifndef EMPLEADOPORHORAS_HPP 
#define EMPLEADOPORHORAS_HPP 
#include "Empleado.hpp" // heredar de la clase Empleado.

// Declaración de la clase EmpleadoPorHoras que hereda de la clase Empleado.
class EmpleadoPorHoras : public Empleado{
    private:
        int horasTrabajadas; // Miembro privado de la clase.

    public:
        // Declaración del constructor de la clase.
        EmpleadoPorHoras(std::string _nombre, int _edad, double _salario, int _horasTrabajadas);
        
        // Declaración del método para calcular el pago del empleado por horas.
        double calcularPago() const override; // Sobrescribe el método virtual puro de la clase base Empleado.
};

#endif 