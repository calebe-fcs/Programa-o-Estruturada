#include <iostream>
#include <locale>

using namespace std;

int main()

{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3;

    cout << (" Digite o primeiro n�mero: \n");
    cin >> num1;
    cout << (" Digite o segundo n�mero: \n");
    cin >> num2;
    cout << (" Digite o terceiro n�mero: \n");
    cin >> num3;

        if (num1 > num2 && num1 > num3)
        {
            cout << " O maior n�mero �: " << num1;
        }
        else if (num2 > num1 && num2 > num3)
        {
            cout << " O maior n�mero �: " << num2;
        }
        else if (num3 > num1 && num3 > num2)
        {
            cout << " O maior n�mero �: " << num3;
        }
    return 0;
}
