#include<cstdlib>
#include<iostream>
#include <clocale>
#include <iomanip>

using namespace std;

int main()

{
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, mediaf;
    char nome[50];

    cout << (" Ol�, este programa ir� calcular sua m�dia de notas. \n");
    cout << (" Digite seu nome por favor: ");
    cin.getline(nome, 50);

    cout << fixed << setprecision(2);

    cout << (" Agora digite a nota da prova 1: ");
    cin >> nota1;
    cout << (" Digite a nota da prova 2: ");
    cin >> nota2;
    cout << (" Digite a nota da prova 3: ");
    cin >> nota3;

    mediaf = (nota1 + nota2 + nota3)/3;

    cout << nome << " sua m�dia final foi de " << mediaf << " pontos.";




    return 0;
}
