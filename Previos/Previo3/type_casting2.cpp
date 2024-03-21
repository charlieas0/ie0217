#include<iostream>
using namespace std;


int main(){
// initialiing a double variable.
    double num_double= 3.56;
    cout << "num_double = " << num_double;
    cout << "\n";
    //c-style conversion from double to int
    int num_int1 = (int)num_double;
    cout << "Num_int1  = " << num_int1;
    cout << "\n";
    // FUnction style conversionfrom double to int.
    int num_int2 = int(num_double);
    cout <<"num_int2  = "<< num_int2;
        cout << "\n";
    return 0;

}