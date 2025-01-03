#include <iostream>

using namespace std;

int main()
{

    int inteiro;
    inteiro = 5.2;
    cout << inteiro << endl;

    float real;
    real = 5.2;
    cout << real << endl;

    double real2;
    real2 = 5.2e99;
    cout << real2 << endl;
    // 5.2e99 5.2 *10 elevado a 99
    // double real= números reais maiores

    bool booleano;
    booleano = false;
    cout << booleano << endl;

    char letra;
    letra = 'b'; // char é uma letra só, usando aspas simples
    // String se usa ""
    cout << letra << endl;

    string palavra;
    palavra = "Carai";
    cout << palavra << endl;

    int idade;
    cout << "Qual sua idade?" << endl;
    cin >> idade; 
    //>> pra atribuir valor a variavel entrada
    cout << "idade: " << idade << endl;

    return 0;
}