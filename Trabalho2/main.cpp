#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    const float num1 = 2112;
    const float porc = 12.0/100.0;
    float result_f;

    cout << (" Vamos calcular 12% de 2112.\n");

    result_f = num1 * porc;

    cout << " O resultado desta operação é: " << result_f << "\n";



    return 0;
}
