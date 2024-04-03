#include <iostream>
using namespace std;


class Student{
    private:
        int age;
    
    public:
        // constructor initializes age to 12.
        Student() : age(12){
        }
        void getAge(){
            cout << "Age = " << age << endl;

        }
};

int main(){
    // Dynamically declare student object 
    Student* ptr = new Student();

    // call getage() function
    ptr -> getAge();

    // ptr memory ir released
    delete ptr;
    return 0;
}