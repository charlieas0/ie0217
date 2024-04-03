#include <iostream>
using namespace std;

int main(){
    // DECLARE AN INT POINTER.
    int* pointInt;

    //declare a float ponter
    float* pointFloat;

    // Dynamically allocate memory.
    pointInt = new int;
    pointFloat = new float;

    // Assigning value to the memory
    *pointInt = 45;
    *pointFloat = 45.45f;
     

     cout << *pointInt << endl;
     cout << *pointFloat << endl;

     // dellocate the memory.
     delete pointInt;
     delete pointFloat;
     return 0;
}