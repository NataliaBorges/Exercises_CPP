//CO7EXTRA02.cpp

#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    int I, A[10];
    cout << setiosflags(ios::right); // alinhamento dos números inteiros da direita para a esquerda

    //Entrada de dados na matriz A

    for (I = 1; I <= 10; I++){
        cout << "Entre o valor " << setw(2) << I  << ": ";
        cin >> A[I-1];
        cin.ignore(80, '\n');
    }
    // Apresentacao dos dados da matriz A

    for (I = 1; I <= 10; I++)
        cout << "\nA[" << setw(2) << I + 1 << "] = " << setw(3) << A[I - 1];
    cout << endl;

    cout << endl;
    cout <<"Tecle <Enter> para encerrar ... ";
    cin.get();
    return 0;
}

