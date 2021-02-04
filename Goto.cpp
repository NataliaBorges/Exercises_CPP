//Goto
#include <iostream>

using namespace std;

int main(void){
    int I, J;

    for (I = 0; I < 10; I++){
        cout << "Outer loop executing. I = " << I << endl;
        for ( J = 0; J < 2; J++){
            cout << "Inner loop executing. J = " << J << endl;
            if( I == 3)
                goto stop;
        }
    }
    cout << "Loop exited. I = " << I;

    stop:
        cout << "Jumped to stop. I = " << I;
}
