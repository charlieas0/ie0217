#include<iostream>
using namespace std;

//funciones clases amigas.
class Distance{
    private:
        int meter;

        // friend function.
        friend int addFive(Distance);
    public:
        Distance() : meter(0){}
};

int addFive(Distance d){
    d.meter += 5;
    return d.meter;

};

int main(){
    Distance D;
    cout <<  "Distance: " << addFive(D);
    return 0;
}