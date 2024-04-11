#include<iostream>
#include "principal.hpp" 

using namespace std;

int main(){
    Libro* listaLibros = nullptr; // Inicializa la lista de libros como vacía
    int opcion;

    do
    {
        cout << "Seleccione su opcion: "<< endl;
        cout << "1. Agregar un libro"<< endl;
        cout << "2. Mostrar todos los libros"<< endl;
        cout << "3. Salir "<< endl;

        cin >> opcion;

        switch (opcion)
        {
        case AGREGAR_LIBRO: // Agrega un libro a la lista
            agregarLibro(listaLibros);
            break;
        case MOSTRAR_LIBRO: // Muestra todos los libros en la lista
            mostrarLibros(listaLibros);
            break;
        case SALIR: // Sale del programa
            cout<< "Saliendo del programa." << endl;
            break;    
        default: // Opción no válida
            cout << "Opcion no permitida"<< endl;
            break;
        }
    } while (opcion != SALIR); // Repite el bucle hasta que se seleccione la opción de salir

    liberarMemoria(listaLibros); // Libera la memoria asignada 
    // a la lista de libros antes de salir del programa

    return 0;
}