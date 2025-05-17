#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num;

    cout << (" Digite um valor qualquer...: ");
    cin >> num;

        if (num >= 0)
            cout << " O valor " << num << " é positivo. \n";
        if (num < 0)
            cout << " O valor " << num << " é negativo. \n";





    return 0;
}
