// CO5EX05.cpp
//Programa Fatorial

#include <iostream>
#include <cctype>
using namespace std;

int fatorial(int N){
    int I, FAT = 1;
    for(I = 1; I <=N; I++)
        FAT *= I;
    return FAT;
}
void pausa(void){
    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();
    return;
}
int main(void){
    int X;

    cout << "Calculo de Fatorial\n";
    cout << "\nEntre um valor inteiro: "; cin >> X;
    cin.ignore(80, '\n');

    cout << "\nFatorial de " << X << " = a: ";
    cout << fatorial(X) << endl;

    pausa();
    return 0;
}
