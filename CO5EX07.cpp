//CO5EX07.cpp

#define _USE_MATH_DEFINES //diretiva define. Para usar recursos matemáticos. Essa linha é por questões de compatibilidade.

#include <iostream> // biblioteca de entrada e saída
#include <iomanip>  // manipulação de valores numéricos
#include <cmath>    // chamando uma biblioteca matemática
using namespace std;

int main (void){
    cout << setprecision(10);
    cout << setiosflags(ios::fixed);

    cout << setw(14) << acos(-1)           << endl;
    cout << setw(14) << acos(0.5)*180/M_PI << endl;

    cout << setw(14) << asin(-1)           << endl;
    cout << setw(14) << asin(0.5)*180/M_PI << endl;

    cout << setw(14) << atan(0.5)          << endl;
    cout << setw(14) << atan(1)*180/M_PI   << endl;

    cout << setw(14) << atan2(1,1)         << endl;
    cout << setw(14) << atan2(-1,-1)       << endl;

    cout << setw(14) << cos(45/180)        << endl;
    cout << setw(14) << cos(atan(1))       << endl;

    cout << setw(14) << sin(M_PI/6)        << endl;
    cout << setw(14) << sin(1)             << endl;

    cout << setw(14) << tan(4)             << endl;
    cout << setw(14) << tan(M_PI/4)        << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar... ";
    cin.get();
    return 0;
}
