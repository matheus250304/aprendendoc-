#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int a = 5, b = 2;

    int soma = a + b;
    cout << "A soma dos numeros: " << soma << endl;
    // cout << "Soma: " << a + b << endl;

    int sub = a - b;
    cout << "subtracao: " << sub << endl;

    int mult = a * b;
    cout << "multiplicacao: " << mult << endl;

    int quocdiv = a / b;

    cout << "quociente da divisao: " << quocdiv << endl;

    int resdiv = a % b;

    cout << "resto da divisao: " << resdiv << endl;

    float div = (float)a / (float)b;

    cout << "a divisao e: " << div << endl;

    float pot = pow(a, b);
    cout << "potencia: " << pot << endl;

    //incremento e decremento 
    cout << "a antigo: " << a << endl;
    //a=a+1;
    //a+=1;
    //a++;

    //Decremento
    //a=a-1;
    //a-=1;
    //a--;

    //Multi
    a*=2;
    cout << "a novo: " << a << endl;

    return 0;
}