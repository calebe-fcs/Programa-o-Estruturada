#include<iostream>
#include<locale>
#include<iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float media1, media2, media3, media4, mediaf;

    cout << fixed << setprecision(2);

    cout << (" Olá, vamos somar suas notas bimestrais e calular sua média final. \n");
    cout << (" Digite a nota da primeira média bimestral: ");
    cin >> media1;
    cout << (" Digite a nota da segunda média bimestral: ");
    cin >> media2;
    cout << (" Digite a nota da terceira média bimestral: ");
    cin >> media3;
    cout << (" Digite a nota da quarta média bimestral: ");
    cin >> media4;

    mediaf = (media1 + media2 + media3 + media4)/4;

    cout << " Sua média final foi de " << mediaf << " pontos. \n";




    return 0;
}
