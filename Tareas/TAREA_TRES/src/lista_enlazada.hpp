#ifndef LISTA_ENLAZADA_HPP
#define LISTA_ENLAZADA_HPP

#include <iostream>
#include <string>

/**
 * @brief Estructura para representar un contacto.
 */
struct Contacto {
    std::string nombre; /**< Nombre del contacto. */
    std::string telefono; /**< Número de teléfono del contacto. */
};

/**
 * @brief Estructura para representar un nodo de la lista enlazada.
 */
struct Nodo {
    Contacto contacto; /**< Contacto almacenado en el nodo. */
    Nodo* siguiente; /**< Puntero al siguiente nodo en la lista. */
};

/**
 * @brief Clase que representa una lista enlazada de contactos.
 */
class ListaEnlazada {
private:
    Nodo* primero_lista; /**< Puntero al primer nodo de la lista. */

public:
    /**
     * @brief Constructor de la clase ListaEnlazada.
     */
    ListaEnlazada();

    /**
     * @brief Agrega un nuevo contacto a la lista.
     * @param contacto El contacto que se va a agregar.
     */
    void agregarContacto(Contacto contacto);

    /**
     * @brief Elimina un contacto de la lista.
     * @param nombre El nombre del contacto que se va a eliminar.
     */
    void eliminarContacto(std::string nombre);

    /**
     * @brief Imprime todos los contactos de la lista.
     */
    void imprimirLista();

    /**
     * @brief Ordena los contactos de la lista por orden alfabético.
     */
    void ordenarContactos();
};

#endif