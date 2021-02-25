//Matriz2D.cpp

#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    int I, J;
    double NOTA[3][4];

    cout << "Leitura e apresentacao de notas\n";
    cout << setprecision(2);
    cout << setiosflags(ios::right);
    cout << setiosflags(ios::fixed);

    //Entrada das notas

    for (I = 0; I <= 2; I++){//Quantidade de alunos
        cout << endl << "Informe as notas do " << I + 1 << "o. aluno:" << endl;
        cout << endl;
        for (J = 0; J <= 3; J++){ // Notas bimestrais
            cout << "Nota: " << J + 1 << " = ";
            cin >> NOTA[I][J];
            cin.ignore(80, '\n');
        }
      }
    cout << endl;

    // Apresentacao das notas

    cout << setw(5) << "Aluno";
    cout << setw(6) << "nota1";
    cout << setw(6) << "nota2";
    cout << setw(6) << "nota3";
    cout << setw(6) << "nota4" << endl;
    cout << endl;
    for(I = 0; I <= 2; I++){
        cout << setw(5) << I + 1;
        for (J = 0; J <= 3; J++)
            cout << setw(6) << NOTA[I][J];
        cout << endl;
      }
    cout << endl;
    cout << "Tecle <Enter> para encerrar... ";
    cin.get();
    return 0;
}
