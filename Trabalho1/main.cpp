#include<cstdlib>
#include<iostream>
#include <clocale>
#include <iomanip>

using namespace std;

int main()

{
    setlocale(LC_ALL, "Portuguese");

    char nome_usuario[50];
    float distancia, velocidade_media, tempo_min, tempo_hora;

    cout << (" Ol�, este programa calcular� sua velocidade m�dia enquanto voc� andou de bicicleta. \n");
    cout << (" Mas antes, insira o seu nome: ");
    cin.getline(nome_usuario, 100);
    cout << (" Certo, agora diga quantos Kilometros voc� pedalou: ");
    cin >> distancia;
    cout << (" Ok, agora informe o tempo em que voc� percorreu o trageto (em minutos): ");
    cin >> tempo_min;

    tempo_hora = tempo_min/60;
    velocidade_media = distancia/tempo_hora;

    cout << fixed << setprecision (1);

    cout << " Muito bem " << nome_usuario << "! Voc� percorreu " << distancia << " Kilometros de dist�ncia, em " << tempo_min << " minutos. \n";
    cout << " Sua velocidade m�dia foi de : " << velocidade_media << " Kilometros por hora!";

    return 0;
}
