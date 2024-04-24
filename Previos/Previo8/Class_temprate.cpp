#include<iostream>
using namespace std;

// Class template.
template<class T>
class Number {
private:
    // Variable of type T
    T num;

public:
    // Constructor.
    Number(T n) : num(n) {}

    T getNum() {
        return num;
    }
};

int main() {
    // Creation of objects with the integer type.
    Number<int> numberInt(7);

    // Creation of objects with the double type.
    Number<double> numberDouble(7.7);

    cout << "Integer Number = " << numberInt.getNum() << endl;
    cout << "Double Number = " << numberDouble.getNum() << endl;

    return 0;
}
