#include<iostream>
#include<locale>

using namespace std;

int main()

{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, soma;

    cout << (" Ol�! Vamos somar dois n�meros. \n");
    cout << (" Digite o primeiro n�mero: ");
    cin >> num1;
    cout << (" Digite o segundo n�mero: ");
    cin >> num2;
    soma = num1 + num2;
    cout << " A soma entre os n�meros �: " << soma <<".\n";

    return 0;
}
