#include<iostream> 
#include<stack>
#include<string>

using namespace std;

int main(){
    stack<int> numbers;

    // push en el stack.
    numbers.push(1);
    numbers.push(100);
    numbers.push(10);

    cout << "numero es: "<< endl ;
    

    while(!numbers.empty()){
        cout << numbers.top() << ", ";
        numbers.pop();

    }

    return 0;
}