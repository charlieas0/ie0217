#include<iostream>
using namespace std;

int count;
extern void write_extern();

main (){
    count = 5;
    write_extern();
}