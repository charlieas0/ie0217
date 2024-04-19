#include "lista_enlazada.hpp"
#include<vector>

using namespace std;

ListaEnlazada::ListaEnlazada() : primero_lista(nullptr) {}

void ListaEnlazada::agregarContacto(Contacto contacto) {
        Nodo* nodo_nuevo = (Nodo*)malloc(sizeof(Nodo)); // Generando memoria dinamica con malloc
        nodo_nuevo ->contacto = contacto; // Asignando el contacto pasado como argumento al nuevo nodo.
        nodo_nuevo ->siguiente = nullptr;   /*Establece el puntero siguiente, del nuevo nodo
                                            en nullptr, por lo que este nodo es el ultimo de la lista
                                            y no tiene otro siguiente*/ 

        if(primero_lista == nullptr){ // Si la primera de la lista es nullptr, significa que esta vacia.
            primero_lista = nodo_nuevo;  /*si esta vacia, entonces, se asigna el puntero nodo nuevo
                                            al puntero primero en la lista.*/
        }
        else{
            Nodo* temp = primero_lista; /*Si la lista no esta vacia entonces mas bien
                                        entonces hay que asignarle el nuevo nodo al final de la lista.*/
            while (temp ->siguiente != nullptr)// Recorrer la lista hasta encontrar el ultimo nodo
            {
                temp = temp->siguiente;// hasta que temp sea nullptr, se ejecutara.
            }
            temp->siguiente = nodo_nuevo; /*Se asigna el puntero nodo nuevo al puntero siguiente
                                         del ultimo nodo encontrado, conectando nuevo nodo
                                         al final de la lista.
                                        */
        }
    }
void ListaEnlazada::eliminarContacto(std::string nombre) {
        Nodo* temp = primero_lista;
        Nodo* prev = nullptr;

        // Buscar el nodo a eliminar
        while (temp != nullptr && temp->contacto.nombre != nombre) {
            prev = temp;
            temp = temp->siguiente;
        }

        // Si se encontró el contacto
        if (temp != nullptr) {
            // Si el nodo a eliminar es el primero de la lista
            if (prev == nullptr) {
                primero_lista = temp->siguiente;
            } else {
                prev->siguiente = temp->siguiente;
            }
            // Liberar la memoria del nodo eliminado
            delete temp;
        }
    }

void ListaEnlazada::imprimirLista() {
    // Inicializa un puntero temporal al primer nodo de la lista
    Nodo* temp = primero_lista;
    
    // Recorre la lista enlazada e imprime los detalles de cada contacto
    while (temp != nullptr) {
        std::cout << "Nombre: " << temp->contacto.nombre << ", Teléfono: " << temp->contacto.telefono << std::endl;
        temp = temp->siguiente; // Avanza al siguiente nodo de la lista
    }
}

void ListaEnlazada::ordenarContactos() {
    // Paso 1: Obtener todos los contactos de la lista enlazada

    // Declarando un vector para almacenar los contactos
    vector<Contacto> contactos;

    // Inicializa un puntero temporal al primer nodo de la lista
    Nodo* temp = primero_lista;

    // Recorre la lista enlazada y agrega cada contacto al vector
    while (temp != nullptr) {
        contactos.push_back(temp->contacto); // Agrega el contacto al vector
        temp = temp->siguiente; // Avanza al siguiente nodo
    }

    
// Ordenando los contactos por nombre utilizando el algoritmo de ordenamiento de burbuja
for (int i = 0; i < contactos.size() - 1; ++i) {
    // Itera sobre cada elemento del vector
    for (int j = 0; j < contactos.size() - 1 - i; ++j) {
        // Compara el nombre del contacto actual con el siguiente
        if (contactos[j].nombre > contactos[j + 1].nombre) {
            // Intercambia los contactos si están en el orden incorrecto
            Contacto temp = contactos[j];
            contactos[j] = contactos[j + 1];
            contactos[j + 1] = temp;
        }
    }
}
    // Mostrar los contactos ordenados
    for (const auto& contacto : contactos) {
        cout << "Nombre: " << contacto.nombre << ", Teléfono: " << contacto.telefono << endl;
    }
}