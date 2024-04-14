#include<iostream>
using namespace std;

// Función para imprimir un array.
void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

// Función de insertionSort
void insertionSort(int array[], int size){
    // Itera sobre cada elemento del array
    for(int step = 1; step < size; step++){
        int key = array[step];
        int j = step - 1;

        // Mueve los elementos mayores que la clave a una posición adelante
        while(j >= 0 && key < array[j]){
            array[j + 1] = array[j];
            --j;
        }
        // Inserta la clave en su posición correcta
        array[j + 1] = key;
    }
}

// Código principal
int main(){
    int data[] = {9, 5, 1, 4, 3};
    int size = sizeof(data) / sizeof(data[0]);
    // Llama a la función de ordenamiento insertionSort
    insertionSort(data, size);
    cout << "Array ordenado en orden ascendente:\n";
    // Imprime el array ordenado
    printArray(data, size);
    return 0;
}