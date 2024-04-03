#include <iostream>

using namespace std;
/*Se almacena en el segmento de data. */
int globalVariable = 42;


int main(){
    /* Se almacena en el stack. */
    int stackVariable = 10;

    /*Se almancena en el heap*/
    int* heapVariable = new int (20);

cout << "VAlor de globalVariable: " << globalVariable << endl;
cout << "Valor de stackVariable: " << stackVariable << endl;
cout << " Valor de healVariable: " << *heapVariable << endl;


// KIberar la memoria asiganada en el heap.
delete heapVariable;
return 0;
}