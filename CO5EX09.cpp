//CO5EX09.cpp

#include <iostream> // biblioteca de entrada e saída
#include <iomanip>  // manipulação de valores numéricos
#include <cstdlib>
using namespace std;

int main(void){

    cout << setprecision(6);
    cout << setiosflags(ios::fixed);

    char STRING1[9] = "2.718281", STRING2[2]= "2";// conjunto de variaveis contendo cadeia de caracteres
    char STRING3[11] = "2147483647";
    float VALOR1;
    long int VALOR2;

    VALOR1 = atof (STRING1); //converter sequencia alfanumerica em cadeia numerica
    cout << "String = " << setw(9) << STRING1 << endl;//apresentar como sendo uma cadeia
    cout << "Valor  = " << setw(9) << VALOR1  << endl;//apresentar como sendo um valor numerico

    VALOR1 = atoi (STRING2);
    cout << "String = " << setw(2) << STRING2 << endl;
    cout << "Valor  = " << setw(2) << VALOR1  << endl;

    VALOR2 = atol (STRING3);
    cout << "String = " << setw(11) << STRING3 << endl;
    cout << "Valor  = " << setw(11) << VALOR2  << endl;

    cout << "\nTecle <Enter> para encerrar... ";
    cin.get();
    return 0;
}
