//matriz
#include<iostream>

using namespace std;

int I, A[5];

int main (void){
    for(I = 0; I <= 4; I++){
        cout << "A[" << I << "] = ";
        cin >> A[I];
    }
    cout << endl;
    for (I = 0; I <= 4; I++){
        cout << "A[" << I << "] = " << A[I] << endl;
    }
}
