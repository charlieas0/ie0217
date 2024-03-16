#include<iostream>
using namespace std;

// Declaring a function.
int add(int a, int b){
    return(a+b);
}

int main(){
    int sum;
    // calling the function and storing.
    // the returned value in sum.
    sum = add(100, 78);

    cout << "100 + 78: "<< sum;
    cout << "\n";
    return 0;

}