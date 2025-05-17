#include <iostream>
#include <locale>

using namespace std;

int main()

{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    cout << (" Olá, diga dois números para que este programa te retorne o maior deles. \n");
    cout << (" Escreva o primeiro número. \n");
    cin >> num1;
    cout << (" Escreva o segundo número. \n");
    cin >> num2;

    if (num1 > num2)
        cout << " O maior núemro é: " << num1;
    if (num2 > num1)
        cout << " O maior número é: " << num2;

    return 0;
}
