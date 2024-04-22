#include<iostream> 
#include<vector>
#include<string>

using namespace std;


int main(){

     vector<string> languages = {"Python", "Java", "c++"};

     vector<string>::iterator itr;

     for(itr = languages.begin(); itr != languages.end(); itr++){
        cout << *itr <<",";
     }

     return 0;
}