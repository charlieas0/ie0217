#include<iostream>
using namespace std;

// Función para intercambiar la posición de dos elementos
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Función para imprimir un array.
void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

// Función de selectionSort para ordenar el array en orden descendente
void selectionSort(int array[], int size){
    // Itera sobre cada elemento del array
    for(int step = 0; step < size - 1; step++){
        // Encuentra el índice del elemento máximo en cada iteración
        int min_idx = step;
        for(int i = step + 1; i < size; i++){
            // Si el elemento actual es mayor que el máximo encontrado hasta ahora, actualiza el índice del máximo
            if(array[i] > array[min_idx])
                min_idx = i;
        }
        // Coloca el elemento máximo en la posición correcta intercambiándolo con el elemento en la posición actual
        swap(&array[min_idx], &array[step]);
    }
}

// Código principal
int main(){
    int data[] = {2, 20, 10 , 15, 12};
    int size = sizeof(data) / sizeof(data[0]);
    // Llama a la función de ordenamiento selectionSort para ordenar en orden descendente
    selectionSort(data, size);
    cout << "Array ordenado en orden descendente:\n";
    // Imprime el array ordenado
    printArray(data, size);
}