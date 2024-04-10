#include "Planeta.hpp"
#include"Pais.hpp"
#include"Continente.hpp"
#include"PaisEnDesarrollo.hpp"
#include <iostream>
#include"PaisPrimerMundo.hpp"

using namespace std;

//Definiendo los metodos de la clase planeta.
void Planeta::agregarContinente(const std::string& nombre) {
    continentes.emplace_back(nombre);
}


// Metodo para agregar un pais a un continente especifico.
void Planeta::agregarPais(const std::string& continente, Pais* pais) {
    for (auto& cont : continentes) {
        if (cont.nombre == continente) {
            cont.agregarPais(pais);
            break;
        }
    }
}


// Metodo para agregar continente con aeropueto
void Planeta::agregarContinenteConAeropuerto(const std::string& continente) {
    continentesConAeropuerto.push_back(continente);
}


// Metodo para imprimir la informacion del planeta
void Planeta::imprimirInformacion() const {
    // Mostrar mensajes
    std::cout << "Información General:" << std::endl;
    std::cout << "Planeta posee " << continentes.size() << " continentes: ";
    // Ciclo para calcular el tamaño.
    for (size_t i = 0; i < continentes.size(); ++i) {
        std::cout << continentes[i].nombre;
        if (i != continentes.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "." << std::endl;
    // Indicar por los continentes dos pasa el avion
    std::cout << "De estos continentes, el avión pasa por los siguientes: ";
    for (const auto& continente : continentesConAeropuerto) {
        std::cout << continente << ", ";
    }
    std::cout << std::endl;
    // Informacion de los paises en los continente.
    std::cout << "Información sobre los países:" << std::endl;
    for (const auto& continente : continentes) {
        continente.imprimirInformacion();
    }
}

// Metodo para comparar paises, segun sus caracteristicas.
void Planeta::compararPaises() const {
    int id1, id2;
    // Solicitar identificadores.
    std::cout << "Ingrese el identificador del primer país: ";
    std::cin >> id1;
    std::cout << "Ingrese el identificador del segundo país: ";
    std::cin >> id2;
    // Inializando dos punteros sin que apunten a ninguna direccion de momento.
    Pais* pais1 = nullptr;
    Pais* pais2 = nullptr;

// Itera a través de cada continente en la lista de continentes
    for (const auto& continente : continentes) {
    // Itera a través de cada país en el continente actual
    for (const auto& pais : continente.paises) {
        // Comprueba si el identificador del país coincide con el primer identificador ingresado por el usuario
        if (pais->getIdentificador() == id1) {
            pais1 = pais; // Si coincide, asigna el puntero a pais1
        } else if (pais->getIdentificador() == id2) {
            pais2 = pais; // Si coincide, asigna el puntero a pais2
        }

        // Si ambos países han sido encontrados, sale del bucle interno
        if (pais1 && pais2) {
            break;
        }
    }

    // Si ambos países han sido encontrados, sale del bucle externo
    if (pais1 && pais2) {
        break;
    }
}
    // Desplegando la informacion de cada pais.
    if (pais1 && pais2) {
        std::cout << "Comparación de países:" << std::endl;
        std::cout << "País 1: " << pais1->getNombre() << std::endl;
        std::cout << "Es de primer mundo: " << (pais1->esPrimerMundo() ? "Sí" : "No") << std::endl;
        std::cout << "Tiene tecnología 5G: " << (pais1->tieneTecnologia5G() ? "Sí" : "No") << std::endl;
        std::cout << "Tiene centro de investigación: " << (pais1->tieneCentroInvestigacion() ? "Sí" : "No") << std::endl;
        std::cout << "PIB: $" << pais1->getPIB() << " millones." << std::endl;        
        std::cout << "País 2: " << pais2->getNombre() << std::endl;
        std::cout << "Es de primer mundo: " << (pais2->esPrimerMundo() ? "Sí" : "No") << std::endl;
        std::cout << "Tiene tecnología 5G: " << (pais2->tieneTecnologia5G() ? "Sí" : "No") << std::endl;
        std::cout << "Tiene centro de investigación: " << (pais2->tieneCentroInvestigacion() ? "Sí" : "No") << std::endl;
        std::cout << "PIB: $" << pais2->getPIB() << " millones." << std::endl;
    } else {
        // Error, pais no encontrado.
        std::cout << "Al menos uno de los países no fue encontrado." << std::endl;
    }
}


// Generando un metodo para que se agregue otro pais.
void Planeta::agregarNuevoPais() {
    int id, poblacion, opcion;
    std::string nombre;
    bool esPrimerMundo, tiene5G, tieneCentro;
    // solicitando informacion.
    std::cout << "Ingrese el identificador del nuevo país: ";
    std::cin >> id; // guardando id
    std::cout << "Ingrese el nombre del nuevo país: ";
    std::cin.ignore();
    std::getline(std::cin, nombre);
    std::cout << "Ingrese la población del nuevo país: ";
    std::cin >> poblacion;
    std::cout << "Es de primer mundo? (1: Sí, 0: No): ";
    std::cin >> opcion;
    esPrimerMundo = (opcion == 1);
    std::cout << "Tiene tecnología 5G? (1: Sí, 0: No): ";
    std::cin >> opcion;
    tiene5G = (opcion == 1);
    std::cout << "Tiene centro de investigación? (1: Sí, 0: No): ";
    std::cin >> opcion;
    tieneCentro = (opcion == 1);

    if (esPrimerMundo) {
        PaisPrimerMundo* nuevoPais = new PaisPrimerMundo(id, poblacion, tieneCentro, tiene5G, nombre);
        agregarPaisAlContinente(nuevoPais);
    } else {
        PaisEnDesarrollo* nuevoPais = new PaisEnDesarrollo(id, poblacion, tiene5G, nombre);
        agregarPaisAlContinente(nuevoPais);
    }
}

// Método para agregar un país a un continente específico.
void Planeta::agregarPaisAlContinente(Pais* pais) {
    std::string continente;
    

    std::cout << "Ingrese el nombre del continente donde desea agregar el nuevo país: ";
    std::cin.ignore(); // Ignorar el salto de línea residual en el búfer de entrada
    std::getline(std::cin, continente); // Leer el nombre del continente ingresado por el usuario

    // Iterar a través de cada continente en la lista de continentes
    for (auto& cont : continentes) {
        // Comprobar si el nombre del continente coincide con el nombre ingresado por el usuario
        if (cont.nombre == continente) {
            // Agregar el país al continente correspondiente
            cont.agregarPais(pais);
        
            std::cout << "El país se agregó correctamente al continente " << continente << "." << std::endl;
            return;
        }
    }

    // Error.
    std::cout << "No se pudo agregar el país. El continente especificado no existe." << std::endl;
}

// Metodo para eliminar pais
void Planeta::eliminarPais() {
    int id;
    bool encontrado = false; // Bandera para indicar si se encontró el país con el ID especificado

    // Solicitar al usuario que ingrese el identificador del país que desea eliminar
    std::cout << "Ingrese el identificador del país que desea eliminar: ";
    std::cin >> id;

    // Iterar a través de cada continente en la lista de continentes
    for (auto& continente : continentes) {
        // Iterar a través de cada país en el continente actual
        for (auto it = continente.paises.begin(); it != continente.paises.end(); ++it) {
            // Comprobar si el identificador del país actual coincide con el ID ingresado por el usuario
            if ((*it)->getIdentificador() == id) {
                // Eliminar el país de la memoria y de la lista de países del continente
                delete *it;
                continente.paises.erase(it);
                // Informar al usuario que el país se eliminó correctamente
                std::cout << "El país con ID " << id << " se eliminó correctamente." << std::endl;
                encontrado = true; 
                break;
            }
        }
        if (encontrado) 
            break;
    }
    
    // Si no se encontró ningún país con el ID especificado, informar al usuario
    if (!encontrado) {
        std::cout << "No se encontró ningún país con el ID especificado." << std::endl;
    }
}