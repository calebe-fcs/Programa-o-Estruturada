#include<iostream>
#include<locale>
#include<iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float raio, areac;
    const float pi = 3.14;

    cout << (" Diga um raio qualquer de um círculo: \n");
    cin >> raio;

    areac = pi*(raio * raio);

    cout << " A área deste círculo qualquer de é: " << areac << " centímetros.";

    return 0;
}
