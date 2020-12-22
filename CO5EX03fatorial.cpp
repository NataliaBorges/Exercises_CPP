//CO5EX03.cpp
//Programa Fatorial

#include <iostream>
#include <cctype>
using namespace std;

// protótipos de função antes do main (Não muito adequado )
// Toda sub-rotina que antecede a palavra void é um procedimento

void fatorial(int N){
    int I;
    long int FAT = 1;
    for (I = 1; I<= N; I++)
        FAT *= I;
    cout << "\nFatorial de " << N << " = a: " << FAT << endl;
    return;
}
void pausa(void){
    cout << endl;
    cout << "Tecle <Enter> para encerrar... ";
    cin.get();
    return;
}

int main(void){
    int X, Y;

    cout << "Calculo de fatorial\n";
    cout << "\nEntre o valor inteiro: "; cin >> X;
    cin.ignore (80,'\n');
    fatorial(X);

    cout << "\nEntre o valor inteiro: "; cin >> Y;
    cin.ignore (80,'\n');
    fatorial(Y);
    fatorial(9);
    fatorial(6);
    pausa();
}

