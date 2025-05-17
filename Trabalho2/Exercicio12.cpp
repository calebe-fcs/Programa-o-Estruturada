#include <iostream>
#include <locale>

using namespace std;

int main()

{
    setlocale(LC_ALL, "Portuguese");

    float metros_q, litros;
    int qnt_baldes, valor_t;

    cout << (" Olá! Diga quantos metros quadrados você pretende pintar: \n ");
    cin >> metros_q;

    litros = metros_q/3;
    qnt_baldes = litros / 18;

    cout << " A quantidade de baldes de tinta que você precisará será de: " << qnt_baldes << " baldes de tinta.\n";

    valor_t = qnt_baldes * 80;

    cout << " E o valor a se pagar será de " << valor_t << " reais. \n";


    return 0;
}
