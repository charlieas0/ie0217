// evitar la inclusión múltiple del archivo de encabezado.
#ifndef EMPLEADO_HPP 
#define EMPLEADO_HPP 

// Incluyendo la biblioteca string para usar cadenas de caracteres.
#include <string> 

// Declaración de la clase Empleado.
class Empleado{
    protected:
        // Miembros protegido de la clases.
        std::string nombre; 
        int edad; 
        double salario; 
    public:
        // Declaración del constructor de la clase.
        Empleado(std::string _string, int _edad, double _salario);
        
        // Declaración del destructor virtual de la clase.
        // Limpia cualquier recurso utilizado por la clase (puede ser sobrescrito por clases derivadas).
        virtual ~Empleado(){} 

        // Declaración de un método virtual puro para calcular el pago del empleado.
        virtual double calcularPago() const = 0; // Este método debe ser implementado por las clases derivadas.

        // Declaración de un método para mostrar los detalles del empleado.
        virtual void mostrarDetalle() const;
};

#endif 