#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario_b, salario_l;
    const float ir = 7.0/100.0;

    cout << (" Olá, digite o quanto você ganha de salário bruto: \n");
    cin >> salario_b;

    salario_l = salario_b - ( salario_b * ir);

    cout << " Seu salário bruto é de: " << salario_b << " reais, porem retirando o imposto de renda (7%), \n seu salário líquido passa a ser " << salario_l << " reais. \n";


    return 0;
}
