#ifndef HASH_TABLE_HPP
#define HASH_TABLE_HPP

#include <iostream>
#include <string>
#include <unordered_map>

#include "lista_enlazada.hpp"

/**
 * @brief Clase que representa una tabla hash para almacenar contactos.
 */
class HashTable {
private:
    std::unordered_map<std::string, Nodo*> tableNombre; /**< Tabla hash para buscar por nombre. */
    std::unordered_map<std::string, Nodo*> tableTelefono; /**< Tabla hash para buscar por teléfono. */

public:
    /**
     * @brief Agrega un contacto a la tabla hash.
     * @param contacto El contacto que se va a agregar.
     */
    void agregar(Contacto contacto);

    /**
     * @brief Elimina un contacto de la tabla hash por su nombre.
     * @param nombre El nombre del contacto que se va a eliminar.
     */
    void eliminarContacto(std::string nombre);

    /**
     * @brief Imprime el contenido de la tabla hash.
     */
    void imprimirHashTable();
};

#endif