#include<iostream>
#include<locale>
#include<iomanip>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Portuguese");

    float metros, centimetros;

    cout << fixed << setprecision(1);

    cout << (" Ol�, digite um valor em metros para ser transformado em cent�metros. \n");
    cin >> metros;

    centimetros = metros * 100;

    cout << " Em " << metros << " metro(s) voc� possui " << centimetros << " cent�metros.";

    return 0;
}
