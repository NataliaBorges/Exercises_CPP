 // Exemplo3.cpp

 #include <iostream>
 using namespace std;

 int main(void){
    int I, A[5], SOMA = 0;
    cout << "Somatorio de elementos impares" <<  endl;
    cout << endl;

    //Entrada de dados

    for (I = 0; I <= 4; I++){
        cout << " Entre o " << I + 1 << "o. valor: ";
        cin >> A[I];
        cin.ignore (80,'\n');
    }
    //Processamento dos elementos impares

    for (I = 0; I <= 4; I++){
        if(A[I] % 2 != 0)
            SOMA += A[I];
        cout << endl;
    }
    //Apresentacao da soma

    cout << "Soma elementos impares = " << SOMA << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar... ";
    cin.get();
    return 0;
 }
