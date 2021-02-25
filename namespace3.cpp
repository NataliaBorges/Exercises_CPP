//CO5EX18.cpp

#include <iostream>

namespace soma{
    int RESULTADO;
}
namespace quociente{
    float RESULTADO;
}
namespace produto{
    long int RESULTADO;
}
namespace diferenca{
    double RESULTADO;
}
/*quatro áreas de namespace, do qual cada segmento pode ter variaveis locais,
globais, de constantes e outros elementos de comportamento de um programa */

int main(void){

    soma::RESULTADO = 5 + 3; //Variavel RESULTADO associada ao escopo de soma
    std::cout << soma::RESULTADO << std::endl; //como não estou usando o using namespace std, é necessário colocar o std

    quociente::RESULTADO = 5.0/3.0;
    std::cout << quociente::RESULTADO << std::endl;

    produto::RESULTADO = 5 * 3;
    std::cout << produto::RESULTADO << std::endl;

    diferenca::RESULTADO = 5 - 3;
    std::cout << diferenca::RESULTADO << std::endl;

    std::cout << std::endl;
    std::cout << "Tecle <Enter> para encerrar... ";
    std::cin.get();
    return 0;
}
