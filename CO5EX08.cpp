//CO5EX08.cpp

#include <iostream> // biblioteca de entrada e saída
#include <iomanip>  // manipulação de valores numéricos
#include <cmath>    // chamando uma biblioteca matemática
using namespace std;

int main(void){
    cout << setprecision(10);
    cout << setiosflags(ios::fixed);

    cout << setw(14) << pow(2.0,3.0)   << endl; //calculo da potência
    cout << setw(14) << pow(2.0,0.0)   << endl; //calculo da potência

    cout << setw(14) << sqrt(144)      << endl; //calculo da raiz quadrada
    cout << setw(14) << sqrt(sqrt(16))  << endl; //calculo da raiz quadrada da raiz quadrada

    cout << setw(14) << cbrt(125)      << endl; //calculo da raiz cúbica

    cout << "\nTecle <Enter> para encerrar... ";
    cin.get();
    return 0;
}
