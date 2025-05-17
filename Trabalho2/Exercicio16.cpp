#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, media;

    cout << (" Digite a primeira nota parcial: \n");
    cin >> nota1;
    cout << (" Digite a segunda nota parcial: \n");
    cin >> nota2;

    cout << fixed << setprecision(2);

    media = (nota1 + nota2)/2;

        if (media == 10)
        {
            cout << (" Aprovado com Distinção! \n");
        }
        else if (media >= 7.00 && media <= 9.99)
        {
            cout << (" Aprovado! \n");
        }
        else
        {
            cout << (" Reprovado! \n");
        }
    return 0;
}
