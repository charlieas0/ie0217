#include <iostream>
#include "EmpleadoAsalariado.hpp" // INcluyendo archivos de encabezado.
#include"EmpleadoPorHoras.hpp"


// Un pequeño ejemplo.
int main(){
    EmpleadoAsalariado emp1("Marito", 30, 2000);
    EmpleadoPorHoras emp2("Juana", 25, 10, 40 );

    std::cout << "Detalles del empleado asalariado:" << std::endl;
    emp1.mostrarDetalle();
    std::cout << "Page: $" << emp1.calcularPago() << std::endl;
    emp2.mostrarDetalle();
    std:: cout <<"Pago: $" << emp2.calcularPago() << std::endl;

    return 0;
}