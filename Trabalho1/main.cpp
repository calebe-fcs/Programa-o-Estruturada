#include<cstdlib>
#include<iostream>
#include <clocale>
#include <iomanip>

using namespace std;

int main()

{
    setlocale(LC_ALL, "Portuguese");

    char nome[50];
    float celsius, fahrenheit;

    cout << (" Ol�, este programa ir� transformar temperaturas de Fahrenheit em Celsius. \n");
    cout << (" Mas antes, diga seu nome: ");
    cin.getline(nome, 50);
    cout << (" Certo, agora informe a temperatura em Fahrenheit de onde voc� est�: ");
    cin >> fahrenheit;

    cout << fixed << setprecision(2);

    celsius = (fahrenheit - 32) * (5.0/9.0);

    cout << nome << " a temperatura em Celsius � de: " << celsius << " graus.";



    return 0;
}
