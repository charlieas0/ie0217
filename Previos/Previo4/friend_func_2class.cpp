#include<iostream>
using namespace std;

class ClassB;
// clases amigas.
class ClassA{
    public:
        ClassA() : numA(12){}
    private:
        int numA;
        friend int add(ClassA, ClassB);
};


class ClassB{
    public:
        ClassB() : numB(1){}
    private:
        int numB;

        friend int add(ClassA, ClassB);
};


int main(){
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA,objectB);
    return 0;
}