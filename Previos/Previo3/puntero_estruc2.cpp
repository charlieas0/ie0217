#include<iostream> 
using namespace std;

struct Distance{
    int feet;
    float inch;

};

int main(){
    Distance *ptr, d;
    ptr = &d;

    cout << "enter feer: ";
    cin >> (*ptr).feet;
    cout << "enter inch: ";
    cin >> (*ptr).inch;
    

    cout << "Displaying information." << endl;
    cout << "Distance = " << (*ptr).feet << "feet" << (*ptr).inch << "inches";
    return 0;
    

}