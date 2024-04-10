#ifndef PAIS_HPP
#define PAIS_HPP

#include <string>

/**
 * @brief Clase base que representa un país.
 */
class Pais {
protected:
    int identificador; /**< Identificador único del país. */
    int poblacion; /**< Población del país. */

public:
    /**
     * @brief Constructor de la clase Pais.
     * @param id Identificador del país.
     * @param pop Población del país.
     */
    Pais(int id, int pop);

    /**
     * @brief Método para obtener el identificador del país.
     * @return El identificador del país.
     */
    int getIdentificador() const;

    /**
     * @brief Método para obtener la población del país.
     * @return La población del país.
     */
    int getPoblacion() const;

    /**
     * @brief Método abstracto para generar el PIB del país.
     */
    virtual void generarPIB() = 0;

    /**
     * @brief Método abstracto para obtener el nombre del país.
     * @return El nombre del país.
     */
    virtual std::string getNombre() const = 0;

    /**
     * @brief Método abstracto para determinar si el país es de primer mundo.
     * @return Verdadero si el país es de primer mundo, falso en caso contrario.
     */
    virtual bool esPrimerMundo() const = 0;

    /**
     * @brief Método abstracto para determinar si el país tiene tecnología 5G.
     * @return Verdadero si el país tiene tecnología 5G, falso en caso contrario.
     */
    virtual bool tieneTecnologia5G() const = 0;

    /**
     * @brief Método abstracto para determinar si el país tiene centro de investigación.
     * @return Verdadero si el país tiene centro de investigación, falso en caso contrario.
     */
    virtual bool tieneCentroInvestigacion() const = 0;

    /**
     * @brief Método abstracto para obtener el PIB del país.
     * @return El PIB del país.
     */
    virtual int getPIB() const = 0;

    /**
     * @brief Sobrecarga del operador de igualdad para comparar dos países.
     * @param otro El país con el que se va a comparar.
     * @return Verdadero si los países son iguales, falso en caso contrario.
     */
    bool operator==(const Pais& otro) const;
};

#endif
