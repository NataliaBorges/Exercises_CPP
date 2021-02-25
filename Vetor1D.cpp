 // Exemplo1.cpp

#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    int I;
    float A[5], B[5];
    cout << setiosflags(ios::right);
    cout << "Checagem de indice\n\n";

    //Entrada de dados

    for (I = 1; I <= 5; I++){
        cout << "A[" << I << "] = ";
        cin  >> A[I - 1];
        cin.ignore(80, '\n');
    }
    //Processamento par ou impar

    for (I = 1; I <= 5; I++)
        if (I % 2 == 0)
            B[I - 1] = A[I - 1] * 5;
        else
            B[I - 1] = A[I - 1] + 5;
    cout << endl;

    //Apresentação das matrizes

    for (I = 1; I <= 5; I++){
            cout << "A[" << I << "] = " << setw(3) << A[I - 1];
            cout << " | ";
            cout << "B[" << I << "] = " << setw(3) << B[I - 1];
            cout << endl;
    }
    cout << endl;
    cout << "Tecle <Enter> para encerrar... ";
    cin.get();
    return 0;
}
