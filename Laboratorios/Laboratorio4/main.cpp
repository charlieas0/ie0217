#include<iostream>
#include<ctime>
#include<string>
#include<chrono>
#include<cstdlib>
#include"sorting_algorithms.hpp"
using namespace std;
using namespace std:: chrono;



int main(){
    const int SIZE = 10000;
    int arr[SIZE];
    // Llamando a las funciones
    
    generateRandomArray(arr, SIZE);
    measuringSortingTime(bubbleSort,arr,SIZE,"Buble Sort");
        // Desordenando
        generateRandomArray(arr, SIZE);
    measuringSortingTime(insertionSort,arr,SIZE,"Insertion Sort");
        // Desordenando
        generateRandomArray(arr, SIZE);
    measuringSortingTime(selectionSort,arr,SIZE,"selection Sort");
        // Desordenando
        generateRandomArray(arr, SIZE);
    measuringQuickSortTime(quickSort, arr, 0 ,SIZE -1,"QUIT SORT");
    return 0;
}