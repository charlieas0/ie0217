#ifndef PAISPRIMERMUNDO_HPP
#define PAISPRIMERMUNDO_HPP

#include "Pais.hpp"

/**
 * @brief Clase que representa un país de primer mundo.
 */
class PaisPrimerMundo : public Pais {
private:
    bool centroInvestigacion; /**< Indica si el país de primer mundo tiene centro de investigación. */
    bool tecnologia5G; /**< Indica si el país de primer mundo tiene tecnología 5G. */
    std::string nombre; /**< Nombre del país de primer mundo. */

public:
    /**
     * @brief Constructor de la clase PaisPrimerMundo.
     * @param id Identificador del país.
     * @param pop Población del país.
     * @param centro Indica si el país tiene centro de investigación.
     * @param tiene5G Indica si el país tiene tecnología 5G.
     * @param name Nombre del país.
     */
    PaisPrimerMundo(int id, int pop, bool centro, bool tiene5G, std::string name);

    /**
     * @brief Método para generar el PIB del país de primer mundo.
     */
    void generarPIB() override;

    /**
     * @brief Método para obtener el nombre del país de primer mundo.
     * @return El nombre del país.
     */
    std::string getNombre() const override;

    /**
     * @brief Método para determinar si el país es de primer mundo.
     * @return Verdadero si el país es de primer mundo, falso en caso contrario.
     */
    bool esPrimerMundo() const override;

    /**
     * @brief Método para determinar si el país de primer mundo tiene tecnología 5G.
     * @return Verdadero si el país tiene tecnología 5G, falso en caso contrario.
     */
    bool tieneTecnologia5G() const override;

    /**
     * @brief Método para determinar si el país de primer mundo tiene centro de investigación.
     * @return Verdadero si el país tiene centro de investigación, falso en caso contrario.
     */
    bool tieneCentroInvestigacion() const override;

    /**
     * @brief Método para obtener el PIB del país de primer mundo.
     * @return El PIB del país.
     */
    int getPIB() const override;
};

#endif // PAISPRIMERMUNDO_HPP