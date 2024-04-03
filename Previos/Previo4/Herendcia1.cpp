#include<iostream>
using namespace std;

// clase base
class Base{
    public:
        void print(){
            cout << "Base Function" << endl;
        }
};

class Derived : public Base {
    public:
        void print(){
            cout << "Derived Function" << endl;

        }
};


int main(){
    Derived derived1;
    derived1.print();
    return 0;
}

