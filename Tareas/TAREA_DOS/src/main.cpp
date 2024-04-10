// Incluyendo archivos y bibliotecas.
#include "Planeta.hpp"
#include <iostream>
#include"Pais.hpp"
#include"Continente.hpp"
#include"PaisEnDesarrollo.hpp"
#include"PaisPrimerMundo.hpp"









int main() {
    Planeta planeta;

    // Agregar continentes
    planeta.agregarContinente("América");
    planeta.agregarContinente("Europa");
    planeta.agregarContinente("África");
    planeta.agregarContinente("Oceanía");
    planeta.agregarContinente("Asia");

    // Agregar continentes con aeropuerto
    planeta.agregarContinenteConAeropuerto("América");
    planeta.agregarContinenteConAeropuerto("Asia");
    planeta.agregarContinenteConAeropuerto("Europa");

    // Crear países
    PaisPrimerMundo pais1(2, 10000000, true, true, "USA");
    PaisPrimerMundo pais2(5, 5000000, false, true, "Canada");
    PaisEnDesarrollo pais3(10, 20000000, false, "Armenia");
    PaisEnDesarrollo pais4(15, 30000000, false, "Ucrania");
    PaisEnDesarrollo pais5(20, 15000000, false, "Nepal");

    // Agregar países a los continentes
    planeta.agregarPais("América", &pais1);
    planeta.agregarPais("América", &pais2);
    planeta.agregarPais("Europa", &pais3);
    planeta.agregarPais("Europa", &pais4);
    planeta.agregarPais("Asia", &pais5);

    // Menú
    int opcion;
    do {
        std::cout << "\n--- Menú ---" << std::endl;
        std::cout << "1. Mostrar información del planeta" << std::endl;
        std::cout << "2. Comparar países" << std::endl;
        std::cout << "3. Agregar nuevo país" << std::endl;
        std::cout << "4. Eliminar país" << std::endl;
        std::cout << "5. Salir" << std::endl;
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        // Leer la opcion seleccionada
        switch (opcion) {
            // llamada de funcion segun la opcion.
            case 1:
                planeta.imprimirInformacion();
                break;
            case 2:
                planeta.compararPaises();
                break;
            case 3:
                planeta.agregarNuevoPais();
                break;
            case 4:
                planeta.eliminarPais(); 
                break;
            case 5:
                std::cout << "Saliendo..." << std::endl;
                break;
            default:
                std::cout << "Opción no válida. Intente de nuevo." << std::endl;
                break;
        }
    } while (opcion != 5);

    return 0;
}