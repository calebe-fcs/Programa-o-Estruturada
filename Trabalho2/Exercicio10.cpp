#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome [50];
    const float porc = 12.0/100.0;
    float num, resultf;

    cout << (" Olá! Diga seu nome por favor...\n");
    cin.getline(nome, 50);

    cout <<(" Ok, agora diga um número qualquer e vamos calcular 12% deste valor...\n");
    cin >> num;

    resultf = num * porc;

    cout << " O resultado final é: " << resultf << " !\n";


    return 0;
}
