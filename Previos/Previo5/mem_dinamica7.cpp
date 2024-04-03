#include<iostream>
#include<cstdlib>

using namespace std;


int main(){
    float *ptr, *new_ptr;
    ptr = (float*)malloc(5* sizeof(float));
    if (new_ptr == NULL){
        cout << "Memory allocation failed";
        exit(1);
    }

// initializing memory block.
for (int i = 0; i < 5 ; i++){
    ptr[i] = i + 1.5;
}

//reallocationg memory.
new_ptr = (float*) realloc(ptr, 10 * sizeof(float));
if(new_ptr == NULL){
    cout << "Memory re-allocation failed";
    exit(1);
}

// Initializing re-allocated memory block .
for(int i = 5; i < 10; i++){
    new_ptr[i] = i * 2.5;

}
cout << "Printind Values" << endl;

for(int i=0; i< 10; i++){
    cout << new_ptr[i] << endl;

}

free(new_ptr);
return 0;

}