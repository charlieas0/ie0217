#include <iostream>
#include<cstdlib>

using namespace std;


int main(){

    int *ptr;
    ptr = (int*)calloc(5, sizeof(int));
    if (!ptr){
        cout << "Memory allocation failed";
        exit(1);
    }
    cout << "Initializing values ..."<< endl;

    for(int i = 0; i<5 ; i++){
        ptr[i] = i * 2 + 1;
    }
    cout << "Inirialized values"<< endl;
    for (int i = 0; i < 5; i++){
        cout << *(ptr + i )<< endl;

    }

    free(ptr);
    return 0;
}