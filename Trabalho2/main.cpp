#include <iostream>
#include <locale>

using namespace std;

int main()

{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    cout << (" Ol�, diga dois n�meros para que este programa te retorne o maior deles. \n");
    cout << (" Escreva o primeiro n�mero. \n");
    cin >> num1;
    cout << (" Escreva o segundo n�mero. \n");
    cin >> num2;

    if (num1 > num2)
        cout << " O maior n�emro �: " << num1;
    if (num2 > num1)
        cout << " O maior n�mero �: " << num2;

    return 0;
}
