#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// Función de comparación personalizada
bool myfunction(int i, int j) {
    return (i < j);
}

// Estructura para definir un objeto functor
struct myclass {
    // Sobrecarga del operador de llamada de función para comparar elementos
    bool operator()(int i, int j) {
        return (i < j);
    }
} myobject; // Instancia del objeto functor

int main() {
    // Array de enteros de ejemplo
    int myints[] = {32, 71, 12, 45, 26, 80, 53, 33};
    // Creación de un vector a partir del array
    vector<int> myvector(myints, myints + 8);

    // Ordenar los primeros 4 elementos usando comparación por defecto
    sort(myvector.begin(), myvector.begin() + 4);

    // Ordenar los elementos desde el índice 4 hasta el final usando la función de comparación personalizada
    sort(myvector.begin() + 4, myvector.end(), myfunction);

    // Ordenar los elementos desde el índice 4 hasta el final usando el objeto functor
    sort(myvector.begin() + 4, myvector.end(), myobject);

    // Imprimir el contenido del vector
    cout << "MI vector contains: ";
    for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it; // Imprimir cada elemento
    cout << "\n";

    return 0;
}
