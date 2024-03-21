#include"Funciones.hpp" //incluyendo funciones en el nuevo archivo.


// Funcion de agregar contanto con void, que no necesita retorn 0.
void agregarContacto(Contacto listaContactos[], int &numContactos){ //toma lista de contactos y envia la referencia.
    Contacto nuevoContacto;
    std::cout << "Ingrese el nombre del contacto: ";
    std:: cin >> nuevoContacto.nombre; // Se guarda el nombre ingresado.
    // happypath. comfiar que solo sale bien.
    std::cout << "Ingrese el numero de telefono: ";
    std:: cin >> nuevoContacto.telefono; // Se guarda el numero

// num esta en cero, y la variable la aumento en 1.
    listaContactos[numContactos++] = nuevoContacto; // aumentando en 1.
}
// Generando la funcion de buscar contacto.
void mostrarContactos(const Contacto listContactos[], int numContactos){
    std::cout << "Lista contactos: \n";
    // Generando una lista de contactos con un for, hasta que se muestren los contactos guardados.
    for(int i =0; i < numContactos; ++i){
        std::cout<< "nombre: " << listContactos[i].nombre << ",Telefono: "<< listContactos[i].telefono << "\n";

    }
}
// Funcion para buscar contacto
void buscarContacto(const Contacto listaContactos[], int numContactos){ 
    std::string nombreBusqueda;
    std::cout << "Ingrese el nombre a buscar: ";
    std::cin >> nombreBusqueda; // Guardando el nombre que desea buscar.

    bool encontrado = false; //verificando que el nombre fue encontrado4
    //generando el ciclo for
    // Comenzando i en 0, si el numcontacto es menor mayor que i, ejecute el if, y sume 1.
    for(int i = 0; i < numContactos; i++){
        if(listaContactos[i].nombre == nombreBusqueda){
            std::cout << "Nombre: "<< listaContactos[i].nombre << ", Telefono"<< listaContactos[i].telefono << "\n";
            encontrado = true;
            break; // Rompiendo.
        }
    }
    // Si no es encontrado.
    if(!encontrado){
        std:: cout  << "Contacto no encontrado. \n";
    }
}