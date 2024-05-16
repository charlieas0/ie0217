#ifndef VALIDADAREMAIL_HPP
#define VALIDADAREMAIL_HPP

#include <iostream>
#include <regex>
#include <stdexcept>


using namespace std;

/**
 * @brief Clase para validar direcciones de correo electrónico.
 */
class ValidadorEmail {
public:
    /**
     * @brief Valida una dirección de correo electrónico.
     * 
     * @param correo La dirección de correo electrónico a validar.
     */
    void validarCorreo(const string& correo);

private:
    /**
     * @brief Valida el nombre de usuario de la direccion de correo electronico ingresado por el usuario
     * 
     * @param nombre El nombre de usuario a validar.
     */
    void validarNombre(const string& nombre);

    /**
     * @brief Valida el dominio de la direccion de correo electrnico ingresada por el usuario
     * 
     * @param dominio Valida el dominio.
     */
    void validarDominio(const string& dominio);

    /**
     * @brief Valida la extensión de la direccion de correo electronico ingresada por el usuario.
     * 
     * @param extension Valida la extencion
     */
    void validarExtension(const string& extension);
};

#endif 
