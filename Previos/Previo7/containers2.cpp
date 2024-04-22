#include<iostream> 
#include<unordered_set>

using namespace std;

int main(){
    // inicializando el set de tipo entero
    unordered_set<int> numbers = {1, 100, 10, 70, 100};

    // Imprimiendo set.
    cout<< "Numero es: " << endl;
    for(auto &num: numbers){
        cout << num << ", ";

    }
    cout << endl;
    return 0;
}