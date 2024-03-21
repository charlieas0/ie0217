#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include<iostream>
#include"Contacto.hpp"
// en una envia la referencia, modifica el valor original
void agregarContacto(Contacto listaContactos[], int &numContactos); //firma de la funcion
// solo puede acceder al valor.
void mostrarContactos(const Contacto listaContactos[], int numContactos);
// Varible de tipo const, mem intruciones, datos, no se modifica, DRAM recive el resto.
void buscarContacto(const Contacto listaContactos[], int numContactos);

#endif // FUNCIONES_HPP