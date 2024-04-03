#include <iostream>
using namespace std;

int main() {
    // Declare an int pointer.
    int* pointVar;

    // Dynamically allocate memory for an int variable.
    pointVar = new int;

    // Assign value to the variable memory.
    *pointVar = 45;

    // Output the value.
    cout << "Value stored at memory location: " << *pointVar << endl;

    // Free the dynamically allocated memory.
    delete pointVar;

    return 0;
}