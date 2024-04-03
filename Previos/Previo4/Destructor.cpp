#include <iostream>
#include<fstream>
using namespace std;
// generando clase archivo
class Archivo{
    // privado
    private:
    fstream archivo;
    

    public:
        Archivo(string nombre_archivo){
            if(!archivo.is_open()){
                cout << "No se pudo avrir el archivo " << nombre_archivo << endl;
            }
        }

    ~Archivo(){
        if(archivo.is_open()){
            archivo.close();
        }
    }
};

int main() {
    // hacer algo con el archivo

    return 0;
}