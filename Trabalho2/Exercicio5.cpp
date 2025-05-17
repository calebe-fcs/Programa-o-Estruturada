#include<iostream>
#include<locale>
#include<iomanip>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Portuguese");

    float metros, centimetros;

    cout << fixed << setprecision(1);

    cout << (" Olá, digite um valor em metros para ser transformado em centímetros. \n");
    cin >> metros;

    centimetros = metros * 100;

    cout << " Em " << metros << " metro(s) você possui " << centimetros << " centímetros.";

    return 0;
}
