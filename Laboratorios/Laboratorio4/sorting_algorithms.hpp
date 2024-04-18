#ifndef SORTING_ALGORITHMS_HPP
#define SORTING_ALGORITHMS_HPP

#include <string>

// Declaración de las funciones de ordenamiento
void bubbleSort(int arr[], int n); // Función para implementar el algoritmo Bubble Sort
void selectionSort(int arr[], int n); // Función para implementar el algoritmo Selection Sort
void insertionSort(int arr[], int n); // Función para implementar el algoritmo Insertion Sort
void quickSort(int arr[], int low, int high); // Función para implementar el algoritmo Quick Sort

// Funciones para medir el tiempo de ejecución de los algoritmos de ordenamiento
void measuringSortingTime(void (*sortingAlgorithm)(int[], int), int arr[], int n, std::string algorithName);
void measuringQuickSortTime(void (*sortingAlgorithm)(int[], int, int), int arr[], int low, int high, std::string algorithName);

// Función para generar un arreglo de números aleatorios
void generateRandomArray(int arr[], int n);

#endif 