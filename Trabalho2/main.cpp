#include<iostream>
#include<locale>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome [50];
    float salario_hora, hora_mes, salario_mes;

    cout << (" Ol�! Qual o seu nome?");
    cin.getline(nome, 50);
    cout << " Quanto voc� ganha por hora " << nome << "?";
    cin >> salario_hora;
    cout << (" Quantas horas voc� trabalha por m�s?");
    cin >> hora_mes;

    salario_mes = salario_hora * hora_mes;

    cout << nome << " ,voc� recebe, portanto, " << salario_mes << " reais por m�s.\n";

    return 0;
}
