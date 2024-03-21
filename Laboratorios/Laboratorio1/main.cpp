
#include<iostream>
// Incluyendo otros archivos
#include "Contacto.hpp"
#include"Funciones.hpp"

#define MAX_CONTACTOS 100 //definir un codigo modular o escalable.
// Precompilacion. 
// cuando encuentra MAX_ABAJO LO QUITA Y PONE 100.
enum Opciones{
    AGREGAR = 1,
    MOSTRAR,
    BUSCAR,
    SALIR
    
};


int main(){
    //SI TRATO DE ENTRAR A ALGUN ELEMENTO DE CONTACTO, ME LANZA INFORMACION BASURA.
    Contacto listaContactos[MAX_CONTACTOS]; //INSTANCIACION DE LA ESTRUCTURA. LISTAS
    
    // definiendo variables.
    int numContactos = 0;
    int opcion;

    // es un while, pero se ejecuta una vez
    do{
        // Generando menu.
        std::cout<< "\nMenu:\n";
        std::cout<< "1.Agregar Contacto\n";
        std::cout<< "2.Mostrar Contactos\n";
        std::cout<< "3.Buscar Contactos\n";
        std::cout<< "4. Salir\n";
        std::cout<< "Ingrese su opcion: ";
        std::cin >> opcion;
        // ejecutando switch para "validar" la opcion insertada.
        switch (opcion)
        {
        case AGREGAR:
            agregarContacto(listaContactos, numContactos);//parametros por referencia
            // lo que se que se envie, se le envia a la original
            // si lo hiciera por puntero iria al contenido del puntero.
            break;
        case MOSTRAR:
            mostrarContactos(listaContactos, numContactos);
            break;

        case BUSCAR: 
            buscarContacto(listaContactos, numContactos);
        break;
        case SALIR:
            // salir del programa.
            std:: cout << "Saliendo del programa...\n";        
            break;
        
        default: // Usando default para la opcion incorrecta.
            std::cout << "OPCION NO VALIDA. Intente de nuevo..\n";
            break;
        }
    } while(opcion != SALIR);



    return 0; // Retorna 0, si el programa esta bien.
}
