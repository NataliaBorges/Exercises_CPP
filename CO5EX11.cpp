//CO5EX11.CPP
//Definicao de cores

#include <iostream> // Bliblioteca padrão da linguagem
#include <stdlib.h>
#include <windows.h> //Arquivo de cabeçalho. Permite acesso da linguagem C++ a API do Windowa
using namespace std;

#define black       0 // Preto
#define blue        1 // Azul
#define green       2 // Verde
#define cyan        3 // Ciano
#define red         4 // Vermelho
#define magenta     5 // Magenta
#define brown       6 // Marrom
#define lgray       7 // Cinza Claro
#define dgray       8 // Cinza escuro
#define lblue       9 // Azul Claro
#define lgreen     10 // Verde claro
#define lcyan      11 // Ciano claro
#define lred       12 // Vermelho claro
#define lmagenta   13 // Magenta claro
#define yellow     14 // Amarelo
#define white      15 // Branco

void clear(void){//Procedimento que efetua a limpeza da tela
    HANDLE Tela;
    DWORD Escrita = 0;
    COORD Pos;
    Tela = GetStdHandle(STD_OUTPUT_HANDLE);
    Pos.X = 0;
    Pos.Y = 0;
    FillConsoleOutputCharacter(Tela, 32, 80 * 25, Pos, &Escrita);
    SetConsoleCursorPosition(Tela, Pos);
    return;

}

void color(int Fundo, int Texto){
    HANDLE Tela;
    int Cor;
    Tela = GetStdHandle(STD_OUTPUT_HANDLE);

    if (Fundo < 0 and Fundo > 15 and Texto < 0 and Texto > 15)
        Cor = 15;
    else
        Cor = Texto + Fundo * 16;
    SetConsoleTextAttribute(Tela, Cor);
    return;
}

int main(void){
    clear();

    cout << "Padrao de cores com Codigo Numerico\n\n";
    cout << endl;

    color(1,14);
    cout << "Fundo: Azul // Texto: Amarelo" << endl;
    cout << endl;

    color(1,7);
    cout << "Fundo: Azul // Texto: Cinza Claro" << endl;
    cout << endl;

    color(4,14);
    cout << "Fundo: Vermelho // Texto: Amarelo" << endl;
    cout << endl;

    color(0,2);
    cout << "Fundo: Preto // Texto: Verde" << endl;
    cout << endl;

    color(7,12);
    cout << "Fundo: Cinza Claro // Texto: Vermelho Claro" << endl;
    cout << endl;

    color(6,15);
    cout << "Fundo: Marrom // Texto: Branco" << endl;
    cout << endl;

    color(0,7);
    cout << "Tecle <Enter> para encerrar... ";
    cin.get();
    return 0;
}
