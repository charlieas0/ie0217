#include<iostream>
#include<forward_list>

using namespace std;

int main(){
    forward_list<int> nums{1,2,3,4};

    forward_list<int>::iterator itr = nums.begin();

    while(itr != nums.end()){
        int original_value = *itr;

        *itr = original_value;

        itr++;
    }

    for(int num: nums){
        cout << num << ", ";

    }
 return 0;
}