#include "sorting_algorithms.hpp"
#include <iostream>
#include <ctime>
#include <chrono>
#include <cstdlib>

using namespace std;
using namespace std::chrono;

void bubbleSort(int arr[], int n) {
    // Implementación de bubble sort
        for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void selectionSort(int arr[], int n) {
    // Implementación de selection sort
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

void insertionSort(int arr[], int n) {
    // Implementación de insertion sort
        for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int partition(int arr[], int low, int high) {
    // Implementación de la partición para quick sort
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    // Implementación de quick sort
        if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }

}

void generateRandomArray(int arr[], int n) {
    // Implementación de la generación de un array aleatorio
        srand(time(0));
    for(int i = 0; i < n; ++i){
        arr[i] = rand() % 10000;
    }
}

void measuringSortingTime(void (*sortingAlgorithm)(int[], int), int arr[], int n, string algorithName) {
    // Implementación de la medición de tiempo para algoritmos de ordenamiento
        high_resolution_clock :: time_point start = high_resolution_clock:: now();
    sortingAlgorithm(arr,n);
    high_resolution_clock :: time_point stop = high_resolution_clock:: now();

    std::chrono::microseconds duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    // auto duration = duration_cast<microsecunds>(stop -start)

    cout << "Tiempo de "<< algorithName << ": "<< duration.count() << " microsegundos"<< endl;
}

void measuringQuickSortTime(void (*sortingAlgorithm)(int[], int, int), int arr[], int low, int high, string algorithName) {
    // Implementación de la medición de tiempo para quick sort
        high_resolution_clock :: time_point start = high_resolution_clock:: now();
    sortingAlgorithm(arr,low,high);
    high_resolution_clock :: time_point stop = high_resolution_clock:: now();

    std::chrono::microseconds duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    // auto duration = duration_cast<microsecunds>(stop -start)

    cout << "Tiempo de "<< algorithName << ": "<< duration.count() << " microsegundos"<< endl;
}