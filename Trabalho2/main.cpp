#include<iostream>
#include<locale>

using namespace std;

int main()

{
    setlocale(LC_ALL, "Portuguese");

    int num;

    cout << (" Ol�! Digite um n�mero: \n");
    cin >> num;

    cout << " O n�mero informado foi " << num << ".\n";

    return 0;
}
