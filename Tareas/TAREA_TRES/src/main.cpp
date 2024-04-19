// Incluyendo archvos y librerias.
#include <iostream>
#include "lista_enlazada.hpp"
#include "hash_table.hpp"

using namespace std;
void mostrarMenu(ListaEnlazada& lista, HashTable& agenda) {
    int opcion;
    string nombre;

    do {
        // Mostrar el menú de opciones
        cout << "------ Menú ------" << endl << endl;
        cout << "1. Agregar contacto" << endl << endl;
        cout << "2. Eliminar contacto" << endl << endl;
        cout << "3. Imprimir Hash-Table y Listas Enlazadas" << endl << endl;
        cout << "4. Mostrar todos los contactos" << endl<< endl;
        cout << "5. Salir" << endl << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        Contacto nuevoContacto;
        switch (opcion) {
            case 1:
                // Agregando un nuevo contacto
                cout << "Ingrese el nombre del contacto: ";
                std::cin >> nuevoContacto.nombre;
                std::cout << "Ingrese el teléfono del contacto: ";
                std::cin >> nuevoContacto.telefono;
                lista.agregarContacto(nuevoContacto);
                agenda.agregar(nuevoContacto);
                break;
            case 2:
                // Eliminando un contacto existente
                cout << "Ingrese el nombre del contacto a eliminar: ";
                cin >> nombre;
                lista.eliminarContacto(nombre);
                agenda.eliminarContacto(nombre);
                cout << "Contacto eliminado correctamente..." << endl << endl;
                break;
            case 3:
                // Imprimiendo la tabla hash y las listas enlazadas
                cout << "------ Hash-Table y Listas Enlazadas ------" << endl;
                cout << "Hash-Table completa:" << endl;
                agenda.imprimirHashTable();
                cout << "Listas Enlazadas:" << endl;
                lista.imprimirLista();
                break;
            case 4:
                // Mostrar todos los contactos
                cout << "------ Todos los contactos ------" << endl;
                lista.ordenarContactos();
                break;
            case 5:
                // Salir del programa
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                // Mensaje para opción inválida
                cout << "Opción inválida. Intente de nuevo." << endl;
                break;
        }
    } while (opcion != 5);
}

int main() {
    // Crea una lista enlazada y una tabla hash
    ListaEnlazada lista;
    HashTable agenda;
    // Muestra el menú
    mostrarMenu(lista, agenda);
    return 0;
}