#ifndef PLANETA_HPP
#define PLANETA_HPP

#include <vector>
#include <string>
#include "Continente.hpp"

/**
 * @brief Clase que representa un planeta con sus continentes y países.
 */
class Planeta {
private:
    std::vector<Continente> continentes; /**< Vector de continentes del planeta. */
    std::vector<std::string> continentesConAeropuerto; /**< Vector de continentes con aeropuerto. */

public:
    std::vector<Pais*> paises; /**< Vector de punteros a países. */

    /**
     * @brief Método para agregar un continente al planeta.
     * @param nombre Nombre del continente a agregar.
     */
    void agregarContinente(const std::string& nombre);

    /**
     * @brief Método para agregar un país a un continente específico.
     * @param continente Nombre del continente al que se agregará el país.
     * @param pais Puntero al país a agregar.
     */
    void agregarPais(const std::string& continente, Pais* pais);

    /**
     * @brief Método para agregar un continente con aeropuerto.
     * @param continente Nombre del continente con aeropuerto.
     */
    void agregarContinenteConAeropuerto(const std::string& continente);

    /**
     * @brief Método para imprimir información sobre el planeta y sus países.
     */
    void imprimirInformacion() const;

    /**
     * @brief Método para comparar dos países.
     */
    void compararPaises() const;

    /**
     * @brief Método para agregar un nuevo país al planeta.
     */
    void agregarNuevoPais();

    /**
     * @brief Método para agregar un país a un continente específico.
     * @param pais Puntero al país a agregar.
     */
    void agregarPaisAlContinente(Pais* pais);

    /**
     * @brief Método para eliminar un país del planeta.
     */
    void eliminarPais();
};

#endif // PLANETA_HPP