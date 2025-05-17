#include<iostream>
#include<locale>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome [50];
    float salario_hora, hora_mes, salario_mes;

    cout << (" Olá! Qual o seu nome?");
    cin.getline(nome, 50);
    cout << " Quanto você ganha por hora " << nome << "?";
    cin >> salario_hora;
    cout << (" Quantas horas você trabalha por mês?");
    cin >> hora_mes;

    salario_mes = salario_hora * hora_mes;

    cout << nome << " ,você recebe, portanto, " << salario_mes << " reais por mês.\n";

    return 0;
}
