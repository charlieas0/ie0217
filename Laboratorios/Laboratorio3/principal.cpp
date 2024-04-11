// Libreria.cpp
#include "principal.hpp"

// Función para agregar un libro a la lista
void agregarLibro(Libro*& lista){
    Libro* nuevoLibro = new Libro;

    cout << "Ingrese el titulo del libro: "<< endl<< endl;
    cin.ignore(); // Ignora cualquier caracter residual en el buffer
    getline(cin, nuevoLibro->titulo);

    cout << "Ingrese el autor del libro: "<< endl<< endl;
    getline(cin, nuevoLibro->autor);

    cout << "Ingrese el genero del libro: "<< endl<< endl;
    getline(cin, nuevoLibro->genero);

    nuevoLibro ->siguiente = lista; // Establece el siguiente del nuevo libro como el primer libro en la lista
    lista = nuevoLibro; // Actualiza la cabeza de la lista con el nuevo libro

    cout << "Libro agregado correctamente" << endl;
}

// Función para mostrar todos los libros en la lista
void mostrarLibros(Libro* lista){
    if(lista == nullptr){
        cout << "La libreria no tiene libros." << endl;
        return;
    }

    cout << "Lista de libros: "<< endl;
    while(lista != nullptr){
        cout << "Titulo: " <<lista->titulo << endl;
        cout << "Autor: " << lista -> autor << endl;
        cout << "Genero: " << lista -> genero <<endl << endl;
        lista = lista -> siguiente; // Avanza al siguiente libro en la lista
    }
}

// Función para liberar la memoria asignada a la lista de libros
void liberarMemoria(Libro*& lista){
    while(lista != nullptr){
        Libro* temp = lista; // Guarda el libro actual en un puntero temporal
        lista = lista ->siguiente; // Avanza al siguiente libro en la lista
        delete temp; // Libera la memoria asignada al libro guardado en el puntero temporal
    }
}