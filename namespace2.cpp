//CO5EX19.cpp

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

int main(void){
    using namespace produto;//A variavel RESULTADO é apenas da área namespace produto

    RESULTADO = 5 + 3;
    std::cout << RESULTADO << std::endl;

    RESULTADO = 5 / 3;
    std::cout << RESULTADO << std::endl;

    RESULTADO = 5 * 3;
    std::cout << RESULTADO << std::endl;

    RESULTADO = 5 - 3;
    std::cout << RESULTADO << std::endl;

    std::cout << std::endl;
    std::cout << "Tecle <Enter> para encerrar... ";
    std::cin.get();
    return 0;
}
