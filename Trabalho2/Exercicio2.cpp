#include<iostream>
#include<locale>

using namespace std;

int main()

{
    setlocale(LC_ALL, "Portuguese");

    int num;

    cout << (" Olá! Digite um número: \n");
    cin >> num;

    cout << " O número informado foi " << num << ".\n";

    return 0;
}
