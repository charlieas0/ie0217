#include<iostream>
using namespace std;

int main(){
    float arr[3];


    //declare pointer variable.
    float *ptr;
    cout << "Displaying address using aarrays: " << endl;

    // use for loop to print addresses of all array elementa
    for(int i = 0; i < 3; ++i){
        cout << "&arr[" << i << "] = " << &arr[i] << endl; 
    }

    ptr =arr;

    cout << "\nDisplaying address using pointers: " << endl;

    // use for loop to print addresses of al array elements
    for(int i = 0; i < 3; ++i) {
        cout << "ptr + "<< i<< " = " << ptr + i << endl;
        
    }
    return 0;
}