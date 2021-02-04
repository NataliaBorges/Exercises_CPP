//CO7EXTRA01.cpp

#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    int I, A[10];
    cout << setiosflags(ios::right); // alinhamento dos números inteiros da direita para a esquerda

    //Entrada de dados na matriz A

    for (I = 0; I <= 9; I++){
        cout << "Entre o valor " << setw(2) << I + 1 << ": ";
        cin >> A[I];
        cin.ignore(80, '\n');
    }
    // Apresentacao dos dados da matriz A

    for (I = 0; I <= 9; I++)
        cout << "\nA[" << setw(2) << I + 1 << "] = " << setw(3) << A[I];
    cout << endl;

    cout << endl;
    cout <<"Tecle <Enter> para encerrar ... ";
    cin.get();
    return 0;
}
