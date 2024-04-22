#include<iostream> 
#include<vector>

using namespace std;

int main(){
    // Inicializando el vector de tipo entero
    vector<int> numbers = {1, 100 ,10 ,70, 100};

    // print the vector 
    cout << "El numero es: "<< endl;
    for(auto &num: numbers){
        cout << num << "," ;
    }
    cout<<endl;
    return 0;
}