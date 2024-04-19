#include "hash_table.hpp"// Incluye el archivo de encabezado
using namespace std;

void HashTable::agregar(Contacto contacto) {
    // Agrega a la tabla por nombre
        Nodo* nodo_nuevo = (Nodo*)malloc(sizeof(Nodo)); // Generando memoria dinamica con malloc
        nodo_nuevo->contacto = contacto;
        nodo_nuevo->siguiente = nullptr; // Apuntando a null.
        // Agrega a la tambla
        tableNombre[contacto.nombre] = nodo_nuevo;

        // Agrega a la tabla por telefono.
        tableTelefono[contacto.telefono] = tableNombre[contacto.nombre];
}

void HashTable::eliminarContacto(string nombre) {
        if (tableNombre.find(nombre) != tableNombre.end()) {
            // Liberar la memoria asignada para el contacto
            delete tableNombre[nombre];
            // Eliminar la entrada de la tabla por nombre
            tableNombre.erase(nombre);
        }
}
void HashTable::imprimirHashTable() {
    // Itera sobre cada entrada en la tabla hash
    for (auto& entrada : tableNombre) {
        // Imprime la clave de la entrada actual
        cout << "Key: " << entrada.first << endl;
        // Imprime la lista asociada a la clave
        cout << "Lista asociada:" << endl;
        // Inicializand un puntero temporal al primer nodo de la lista asociada
        Nodo* temp = entrada.second;
        // Recorriendo la lista asociada e imprime los detalles de cada contacto
        while (temp != nullptr) {
            cout << "Nombre: " << temp->contacto.nombre << ", Teléfono: " << temp->contacto.telefono << endl;
            temp = temp->siguiente; // Avanza al siguiente nodo de la lista
        }
        cout << endl; // Agrega una línea en blanco después de imprimir la lista asociada
    }
}