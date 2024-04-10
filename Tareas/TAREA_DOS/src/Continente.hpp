#ifndef CONTINENTE_HPP
#define CONTINENTE_HPP

#include <string>
#include <vector>
#include "Pais.hpp"

/**
 * @brief Clase que representa un continente.
 */
class Continente {
public:
    std::string nombre; /**< Nombre del continente. */
    std::vector<Pais*> paises; /**< Vector de punteros a países que pertenecen al continente. */

public:
    /**
     * @brief Constructor de la clase Continente.
     * @param nombre Nombre del continente.
     */
    Continente(const std::string& nombre);

    /**
     * @brief Método para agregar un país al continente.
     * @param pais Puntero al país a agregar.
     */
    void agregarPais(Pais* pais);

    /**
     * @brief Método para imprimir información sobre el continente y sus países.
     */
    void imprimirInformacion() const;
};

#endif 