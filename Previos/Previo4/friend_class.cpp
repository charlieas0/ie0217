#include<iostream>
using namespace std;


class ClassB;

class ClassA{
    public:
        ClassA() : numA(12){}
    private:
        int numA;
        friend class ClassB;
};


class ClassB{
    public:
        ClassB() : numB(1){}

        int add(){
            ClassA objectA;
            return objectA.numA + numB;
        }
    private:
        int numB;

};


int main(){
    ClassB objectB;
    cout << "sum: " << objectB.add();
    return 0;
}