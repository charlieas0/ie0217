#include<iostream> 
#include<vector>
#include<string>

using namespace std;


int main(){
    vector<int> vec{1, 2, 3, 4};

    vector<int>::iterator itr_first = vec.begin();
    vector<int>::iterator itr_last = vec.end()-1;


    cout << "Primer elemento: " << *itr_first << endl;
    cout << "Segundo Elemento: "<< itr_first[1] << endl;


    cout<< "Secund last elemento: " << *(itr_last - 1) << endl;
    cout << "last element: " << *(itr_last) << endl;
    return 0;

}