#ifndef PAISENDESARROLLO_HPP
#define PAISENDESARROLLO_HPP

#include "Pais.hpp"

/**
 * @brief Clase que representa un país en desarrollo.
 */
class PaisEnDesarrollo : public Pais {
private:
    bool tecnologia5G; /**< Indica si el país en desarrollo tiene tecnología 5G. */
    std::string nombre; /**< Nombre del país en desarrollo. */

public:
    /**
     * @brief Constructor de la clase PaisEnDesarrollo.
     * @param id Identificador del país.
     * @param pop Población del país.
     * @param tiene5G Indica si el país en desarrollo tiene tecnología 5G.
     * @param nomb Nombre del país.
     */
    PaisEnDesarrollo(int id, int pop, bool tiene5G, std::string nomb);

    /**
     * @brief Método para generar el PIB del país en desarrollo.
     */
    void generarPIB() override;

    /**
     * @brief Método para obtener el nombre del país en desarrollo.
     * @return El nombre del país.
     */
    std::string getNombre() const override;

    /**
     * @brief Método para determinar si el país en desarrollo es de primer mundo.
     * @return Falso, ya que el país en desarrollo no es de primer mundo.
     */
    bool esPrimerMundo() const override;

    /**
     * @brief Método para determinar si el país en desarrollo tiene tecnología 5G.
     * @return Verdadero si el país en desarrollo tiene tecnología 5G, falso en caso contrario.
     */
    bool tieneTecnologia5G() const override;

    /**
     * @brief Método para determinar si el país en desarrollo tiene centro de investigación.
     * @return Falso, ya que el país en desarrollo no tiene centro de investigación.
     */
    bool tieneCentroInvestigacion() const override;

    /**
     * @brief Método para obtener el PIB del país en desarrollo.
     * @return El PIB del país.
     */
    int getPIB() const override;
};

#endif 