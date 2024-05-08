#include<iostream>
#include"libro.hpp"

Libro::Libro(
    const std::string& titulo,const std::string& autor
) :titulo(titulo), autor(autor){}

void Libro::mostrarInfo()const{
    std::cout << "Titulo: "<< titulo <<"autor"<< autor<< std::endl;
    
}
