/*Charlie A.S
B90765
2024
Ciclo for conformado por un array.*/

#include <iostream>
using namespace std;

int main(){
    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int n: num_array){
        cout << n << " ";
    }
    cout << "\n";

    return 0;
}