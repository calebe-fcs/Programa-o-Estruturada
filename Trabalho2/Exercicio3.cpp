#include<iostream>
#include<locale>

using namespace std;

int main()

{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, soma;

    cout << (" Olá! Vamos somar dois números. \n");
    cout << (" Digite o primeiro número: ");
    cin >> num1;
    cout << (" Digite o segundo número: ");
    cin >> num2;
    soma = num1 + num2;
    cout << " A soma entre os números é: " << soma <<".\n";

    return 0;
}
