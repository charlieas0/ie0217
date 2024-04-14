#include <iostream>
using namespace std;

// Función para realizar el ordenamiento burbuja
void bubbleSort(int array[], int size){
    // Itera a través de cada elemento del array
    for(int step = 0; step < size - 1; ++step){

        // Check if swapping occurs.
        int swapped = 0;

        // Itera para comparar elementos adyacentes
        for(int i = 0; i < (size - step - 1); ++i){


            // Compara dos elementos adyacentes
            if(array[i] > array[i + 1]){
                // Intercambia los elementos si no están en el orden correcto
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;

                swapped = 1;
            }
        }
        if(swapped = 0)
        break;
    }
}
// Función para imprimir el array 
void printArray(int array[], int size){
    // Itera a través del array e imprime cada elemento
    for(int i = 0; i < size; ++i){
        cout << "    " << array[i];
    }
    cout << "\n";
}

int main(){
    // Array de ejemplo
    int data[] = {-2, 45, 0, 11, -9};
    // Tamaño del array
    int size = sizeof(data) / sizeof(data[0]);
    // Ordena el array
    bubbleSort(data, size);
    // Imprime el array ordenado
    cout << "Array ordenado en orden ascendente:\n";
    printArray(data, size);
    return 0;
}