#include<iostream> 
#include<map>
#include<string>

using namespace std;

int main(){
    map<int, string> student;

    // Use [] operador to add elements
    student[1] = "Jacqueline";
    student[2] = "Blake";

    // use insetr() metodo para a;adir elementos
    student.insert(make_pair(3, "Denise"));
    student.insert(make_pair(3, "blake"));

    // add elementos con keys duplicados
    student[5] = "Timothy";
    student[5] = "Aaron";

    for (int i = 1; i <= student.size(); ++i){
        cout << "student["<< i <<"]: " << student[i]<< endl;

    }
    return 0;

}