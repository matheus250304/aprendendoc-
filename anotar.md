### quarto.cpp ###
Em C++, as variáveis podem ser classificadas como locais ou globais com base no escopo e na visibilidade delas dentro do programa. Vamos entender o que são e como funcionam:

1. Variáveis Locais
As variáveis locais são declaradas dentro de funções, blocos ou métodos e só podem ser acessadas dentro do escopo onde foram definidas. Quando o programa sai desse escopo, as variáveis locais deixam de existir, e seus valores são descartados.

Características das Variáveis Locais:
Só existem enquanto o programa está executando o bloco onde foram declaradas.
Não podem ser acessadas fora do escopo onde foram criadas.
São armazenadas na stack (pilha) de memória.
Necessitam ser inicializadas antes de serem usadas.

Exemplo:
#include <iostream>
using namespace std;

void exemploLocal() {
    int x = 10; // Variável local
    cout << "Valor de x: " << x << endl;
}

int main() {
    exemploLocal();
    // cout << x; // Erro! 'x' não é acessível aqui, pois é uma variável local.
    return 0;
}
---------------------------------------------------------------------------------

2. Variáveis Globais
As variáveis globais são declaradas fora de todas as funções ou blocos e podem ser acessadas de qualquer parte do programa. Elas têm um escopo global e permanecem na memória durante todo o tempo de execução do programa.

Características das Variáveis Globais:
São acessíveis de qualquer função ou método.
Armazenadas na área global de memória (ou heap).
Podem ser modificadas de qualquer parte do código, o que exige cuidado para evitar erros e comportamento imprevisível.
São inicializadas automaticamente com um valor padrão (ex.: 0 para inteiros).

#include <iostream>
using namespace std;

int y = 20; // Variável global

void exemploGlobal() {
    cout << "Valor de y dentro da função: " << y << endl;
}

int main() {
    cout << "Valor de y no main: " << y << endl;
    exemploGlobal();
    y = 50; // Modificando a variável global
    cout << "Novo valor de y: " << y << endl;
    return 0;
}
----------------------------------------------------------------------------------------


### ### ### ### ## 