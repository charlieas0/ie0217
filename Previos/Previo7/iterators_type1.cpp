#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int> nums{1, 2, 3, 4, 5};

    list<int>::iterator itr = nums.begin();

    cout << "Moviendo adelante: "<< endl;

    while(itr != nums.begin()){
        if(itr != nums.end()){
            cout << *itr << ", ";
        }
          itr--;
    }
    cout << *itr << endl;

    return 0;

}