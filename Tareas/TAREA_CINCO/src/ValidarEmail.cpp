#include "ValidarEmail.hpp"

void ValidadorEmail::validarCorreo(const std::string& correo) {
     try {
            // Expresión regular para validar el formato del correo electrónico
            regex Correo("^([a-zA-Z0-9._-]+)@([a-zA-Z]+\\.[a-zA-Z]{2,6})$");
            // si el correo no es igual al patrón, lanzar una excepción
            if (!regex_match(correo, Correo)) {
                // agregando una excepcion.
                throw invalid_argument("Formato de correo inválido.");
            }

            // Verificar si el correo contiene el carácter "@"
            if (correo.find('@') == string::npos) {
                throw invalid_argument("La dirección de correo electrónico debe contener el carácter '@'.");
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


void ValidadorEmail::validarNombre(const std::string& nombre) {
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

void ValidadorEmail::validarDominio(const std::string& dominio) {
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

void ValidadorEmail::validarExtension(const std::string& extension) {
     if (extension.length() < 2|| extension.length() >6) { //si esta contenido entre 2 y 6 la extension
            throw invalid_argument("La longitud de la extensión no es válida.");
        }
        if (regex_search(extension, regex("[^a-zA-Z]"))) {// excepcopn para que no contenga caracteres especiales
            throw invalid_argument("La extensión no debe contener números ni caracteres especiales.");
        }
    }