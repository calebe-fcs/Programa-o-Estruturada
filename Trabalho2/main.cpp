#include<iostream>
#include<locale>
#include<iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float media1, media2, media3, media4, mediaf;

    cout << fixed << setprecision(2);

    cout << (" Ol�, vamos somar suas notas bimestrais e calular sua m�dia final. \n");
    cout << (" Digite a nota da primeira m�dia bimestral: ");
    cin >> media1;
    cout << (" Digite a nota da segunda m�dia bimestral: ");
    cin >> media2;
    cout << (" Digite a nota da terceira m�dia bimestral: ");
    cin >> media3;
    cout << (" Digite a nota da quarta m�dia bimestral: ");
    cin >> media4;

    mediaf = (media1 + media2 + media3 + media4)/4;

    cout << " Sua m�dia final foi de " << mediaf << " pontos. \n";




    return 0;
}
