// agregando librerias
#include <iostream>
#include <regex>
#include <stdexcept>
#include"ValidarEmail.hpp"

using namespace std;


int main() {
    ValidadorEmail validador;
    string correo;
    int opcion;

    // Generando el menu, para que se ejecute al menos una vez.
    do {
        // Mostrar opciones en pantalla.
        cout << "Menu:" << endl;
        cout << "1. Por favor, ingrese la dirección de correo electrónico" << endl;
        cout << "2. Salir" << endl;
        cout << "Ingrese su opción: ";
        // guardando la eleccion
        cin >> opcion;


        switch (opcion) {
            // si la opcion fue 1, que ingrese el corre
            case 1:
                cout << "Ingrese la dirección de correo electrónico: ";
                cin >> correo;
                validador.validarCorreo(correo); // Llamando a la funcion de validar correo.
                
                break;

            // si fue dos, que salga del programa.
            case 2:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Por favor, ingrese una opcion válida." << endl;
                break;
        }
    } while (opcion != 2);

    return 0;
}
