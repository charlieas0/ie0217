
#include<iostream>
using namespace std;

// Function with float type parameter.
float absolute(float var){
    if (var < 0.0)
    var = -var;
    return var;
}

// Function with float type parameter.
int absolute(int var){
    if (var < 0)
    var = -var;
    return var;
}

int main(){
    //call funtion with int type parameter
    cout << "absolute value of -5" << absolute(-5);
    cout << "\n";
        //call funtion with int type parameter
    cout << "absolute value of 5" << absolute(5.5f);
    cout << "\n";
    return 0;
}