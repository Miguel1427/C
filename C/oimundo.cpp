#include <iostream> //Inclui a biblioteca padrão de entrada e saída em c++, necessária para usar cin e cout.
#include <cstdlib> //Inclui a biblioteca padrão C, que permite o uso da função rand() para geração de números aleatórios.

using namespace std; //Permite o uso direto das funções e abjetos do namesace std, como cout e cin, sem precisar prefixar com std::.

int main() //função principal onde a execção do programa começa.
{    
    // Gera um número secreto aletório entre 1 e 100.
    // rand() % 100 gera um número entre 0 e 99. Adicionamos 1, temps o intervalo de 1 a 100.
    
    int numerosecreto = rand() % 100 + 1;
    
    int tentativas = 8; //Define o número máximo de tentativas que o usuário tem para adivinhar o número.
    int palpite;        //Declara uma variável para armazenar o palpite do usuário.
    
    do //Início de um loop do-while que continuará executando enquanto a condição do while for verdadeiro.
    {
        //Exibe o número da tentativa atual e solicita ao usuário que insira um número.
        cout << "Tentativa" << tentativas << ", digite um numero:";
        cin >> palpite; //lê o palpite do usuário e armazena na variável palpite.
        
        //Verifica se o palpite do usuário é menor que o número secreto.
        if (palpite < numerosecreto)
        {
            cout << "muito baixo!" << endl; //Informa ao usuário que o palpite é muito baixo.
        }
        // Verifica se o palpite do usuário 
        else if (palpite > numerosecreto)
        {
            cout << "Muito alto!" << endl;
        }
        tentativas --;
    } while (palpite != numerosecreto && tentativas >0);
    
    if (palpite == numerosecreto)
    {
        cout << "Paravens! Voce acertou o numero com" << 8 - tentativas << "Tentativa(s)" << endl;
    }
    else
    {
        cout << "Voce não conseguiu adivinhar o numero. O numero secreto era: " << numerosecreto << "!" << endl;
    }
    return 0;
}
