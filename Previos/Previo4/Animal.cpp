#include<iostream>
using namespace std;

// Definiendo la clase animal
class Animal{
    public:
        void setEdad(int age){
            edad = age;
        }
        int getEdad(){
            return edad;
        }

    protected:
        string nombre;
    
    private:
        int edad;
};

// Tomando la clase animal para la clase perro
class Perro : public Animal{
    public:
        void setNombre(string n){
            nombre = n;
        }
        string getNombre(){
            return nombre;
        }
};



int main(){
    // Usando la clase perro 
    Perro miperro;
    miperro.setNombre("Toby");
    miperro.setEdad(3);

    cout << "Mi perro se llama " << miperro.getNombre() << endl;
    cout << "Y tiene " << miperro.getEdad() << "anios " <<endl;

    return 0;
}