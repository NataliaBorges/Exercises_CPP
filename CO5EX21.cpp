//CO5EX20.cpp

#include <iostream>
using namespace std;

int VALOR = 3; // variavel global

//cada escopo possui sua variavel VALOR com validade dentro so seu bloco de atuação

namespace escopo1{
    int VALOR = 2; //variavel global para o escopo 1
    namespace escopo2{
        int VALOR = 1;
    }
}
int main(void){
    int VALOR = 4;

    cout << VALOR << endl; //Valor 4
    cout << ::VALOR << endl; // VAlor prioritariamente acima: Valor 3
    cout << escopo1::VALOR << endl; //Valor dentro do escopo 1: Valor 2
    cout << escopo1::escopo2::VALOR << endl;//VAlor dentro do escopo 2, que esta dentro do escopo 1: Valor 1

    std::cout << std::endl;
    std::cout << "Tecle <Enter> para encerrar... ";
    std::cin.get();
    return 0;
}
