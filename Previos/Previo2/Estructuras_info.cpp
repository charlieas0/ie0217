#include<iostream>
using namespace std;

struct Person
{
    char name[50];
    int age;
    float salary;


};
int main(){
    Person p1;
    // SOlicitando datos 
    cout << "Enter full name: ";
    cin.get(p1.name, 50);
    cout<< "Enter age: ";
    cin >> p1.age;
    cout << "Enter Salary: ";
    cin >> p1.salary;

    // IMPRIMIENDO
    cout << "\n Displaying Information.";
    cout << "Name: "<< p1.name;
    cout << "Age: "<< p1.age;
    cout << "Salary: " << p1.salary;
    return 0;
}