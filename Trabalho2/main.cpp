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
            cout << (" Voc� excedeu a carga limite e dever� pagar multa! \n");
            excesso = peso -50;
            multa = excesso/50;
            valor_m = multa * 4;
            cout << " Voc� dever� pagar " << valor_m << " reais devido ao excesso de " << excesso << " kilos.";
        }


    return 0;
}
