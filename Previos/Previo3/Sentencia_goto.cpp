#include<iostream>
using namespace std;

int main()
{
    float num, average, sum = 0.0;
    int i, n;

    cout << "Maximun number of inputs: ";
    cin >> n;

    for(i = 1; i<= n; ++i){
        cout << "Enter n" << i << ": ";
        cin >> num;

        if(num < 0.0){
            // Control od the promgram move to jump.
            goto jump; //salta
        }
        sum += num;
    }
jump:
    average = sum / (i - 1);
    cout << "\n Average = " << average;
    return 0;
}