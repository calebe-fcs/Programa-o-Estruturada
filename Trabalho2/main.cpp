#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario_b, salario_l;
    const float ir = 7.0/100.0;

    cout << (" Ol�, digite o quanto voc� ganha de sal�rio bruto: \n");
    cin >> salario_b;

    salario_l = salario_b - ( salario_b * ir);

    cout << " Seu sal�rio bruto � de: " << salario_b << " reais, porem retirando o imposto de renda (7%), \n seu sal�rio l�quido passa a ser " << salario_l << " reais. \n";


    return 0;
}
