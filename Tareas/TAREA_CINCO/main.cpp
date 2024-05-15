// agregando librerias
#include <iostream>
#include <regex>
#include <stdexcept>

using namespace std;

class ValidadorEmail {
public:
    // metodo para validar una dirección de correo electrónico
    void validarCorreo(const string& correo) {
        try {
            // Expresión regular para validar el formato del correo electrónico
            regex Correo("^([a-zA-Z0-9._-]+)@([a-zA-Z]+\\.[a-zA-Z]{2,6})$");
            // si el correo no es igual al patrón, lanzar una excepción
            if (!regex_match(correo, Correo)) {
                // agregando una excepcion.
                throw invalid_argument("Formato de correo inválido.");
            }
            // Buscar los grupos de la expresión regular en el correo
            smatch match;
            regex_search(correo, match, Correo);
            // Extraer el nombre y el dominio del correo electrónico
            string nombre = match[1];
            string dominio = match[2];
            // Validar el nombre y el dominio
            validarNombre(nombre);
            validarDominio(dominio);
        } catch (const invalid_argument& e) {
            // Capturar y mostrar cualquier excepción ocurrida
            cerr << "Error: "<< e.what() << endl;
        }
    }

private:
    // Método para validar el nombre del correo electrónico
    void validarNombre(const string& nombre) {
        // Validar la longitud del nombre
        if (nombre.length()<1 || nombre.length() > 15) {
            // agregando una excepcion.
            throw invalid_argument("Longitud del nombre incorrecta.");
        }
        // validar que el nombre no comience con caracteres especiales
        if (nombre.front() =='.'|| nombre.front() == '-' || nombre.front() == '_') {
            // agregando una excepcion.
            throw invalid_argument("El nombre no debe comenzar con un punto, guión o guión bajo.");
        }
        if (nombre.back()=='.' || nombre.back()== '-'|| nombre.back() =='_') {
            // agregando una excepcion.
            throw invalid_argument("El nombre no debe terminar con un punto, guion o guion bajo.");
        }
        // validar que el nombre no contenga dos caracteres especiales seguidos
        if (regex_search(nombre,regex("[.\\-_]{2,}"))) {
            // agregando una excepcion.
            throw invalid_argument("Sorry, el nombre no puede contener dos caracteres especiales consecutivos.");
        }
    }

    // Método para validar el dominio del correo electrónico
    void validarDominio(const string& dominio) {
        // validar la longitud del dominio
        if (dominio.length()< 3|| dominio.length() >30) {
            throw invalid_argument("Longitud del dominio  no es correcta.");
        }
        // validar el formato del dominio.
        if (!regex_match(dominio, regex("^[a-zA-Z]+(\\.[a-zA-Z]+)+$"))) {
            // agregando una excepcion.
            throw invalid_argument("Formato del dominio no valido.");
        }
        // vslidar que el dominio no contenga segmentos consecutivos separados por un único punto
        if (regex_search(dominio, regex("\\.\\."))) {
            // agregando una excepcion.
            throw invalid_argument("El dominio no debe contener segmentos consecutivos separados por un único punto.");
        }
    }
};

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
                cout << "Correo guardado correctamente" << endl << correo << endl;
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
