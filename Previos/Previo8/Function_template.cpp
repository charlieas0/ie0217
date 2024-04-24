#include<iostream>

using namespace std;

// Function template for addition
template<typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int result1;
    double result2;
    
    // Calling with integer parameters
    result1 = add<int>(2, 3);
    cout << "Resultado con los enteros es: " << result1 << endl;

    // Calling with double parameters
    result2 = add<double>(2.2, 3.3);
    cout << "Resultados con doble: " << result2 << endl;

    return 0;
}
