#include<iostream>
#include<locale>
#include<iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float raio, areac;
    const float pi = 3.14;

    cout << (" Diga um raio qualquer de um c�rculo: \n");
    cin >> raio;

    areac = pi*(raio * raio);

    cout << " A �rea deste c�rculo qualquer de �: " << areac << " cent�metros.";

    return 0;
}
