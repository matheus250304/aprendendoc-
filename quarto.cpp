#include <iostream>

using namespace std;

void inscrever()
{

    cout << "Se inscreva no Canal do meu pa...." << endl;
}

int somar(int x, int y)
{
    //int t;

    //t=1;

    int soma; // Variavel local, só vale dentro dessa função

    soma = x + y;

    return soma;
}

int main()
{
    //int t;
    //t=0;

    int a=5, b = 4;

    int s;
    
    s = somar(a,b);
    // o "s" recebe a saida da função somar
    cout << "a soma e: " << s << endl;
    
    

    return 0;
}