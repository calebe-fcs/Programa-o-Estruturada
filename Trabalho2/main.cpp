#include<iostream>
#include<locale>
#include<iomanip>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int lados, area, area2;

    cout << (" Digite o tamanho dos lados de um quadrado qualquer: \n");
    cin >> lados;

    area = lados * lados;
    area2 = area * 2;

    cout << " O dobro da �rea desse quadrado �: " << area2;
    return 0;
}
