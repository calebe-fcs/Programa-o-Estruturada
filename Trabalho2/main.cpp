#include <iostream>
#include <locale>

using namespace std;

int main()

{
    setlocale(LC_ALL, "Portuguese");

    float peso, excesso;
    int multa, valor_m;

    cout << (" Insira a carga: \n");
    cin >> peso;

        if (peso > 50)
        {
            cout << (" Você excedeu a carga limite e deverá pagar multa! \n");
            excesso = peso -50;
            multa = excesso/50;
            valor_m = multa * 4;
            cout << " Você deverá pagar " << valor_m << " reais devido ao excesso de " << excesso << " kilos.";
        }


    return 0;
}
