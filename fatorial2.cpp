//CO5EX04.cpp
//Programa Fatorial

#include <iostream>
#include <cctype>
using namespace std;

void fatorial(int N, long int &FAT){
    int I;
    for (I = 1; I <= N; I++)
        FAT *= I;
}

void pausa(void){
    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();
    return;
}

int main(void){
    int X;
    long int Y = 1;

    cout << "Calculo de Fatorial\n";
    cout << "\nEntre um valor inteiro: "; cin >> X;
    cin.ignore(80, '\n');

    fatorial(X, Y);
    cout << "\nFatorial de " << X << " = a: " << Y << endl;
    pausa();
    return 0;

}

