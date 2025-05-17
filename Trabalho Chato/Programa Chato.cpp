#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char  nome[50], cidade, resp1, resp2, resp3, texto[300];
    int idd;
    string trab, time;

    cout << " * Ola!!! Diga-me seu nome: *\n -> ";
    cin.getline(nome, 50);
    cout << " Parabens! Seu nome e horroroso...\n";

    do {
        cout << " * Onde voce nasceu? *\n";
        cout << "(v) Votuporanga.\n";
        cout << "(f) Fernandopolis.\n";
        cout << "(s) Sao Paulo.\n";
        cout << "(o) Outra cidade.\n -> ";
        cin >> cidade;

        switch (cidade) {
            case 'v':
                cout << " Ok, sua cidade e legal mas o povo e meio caipira...\n";
                break;
            case 'f':
                cout << " Hmm, pode-se dizer que voce nasceu no lixao...\n";
                break;
            case 's':
                cout << " A julgar pela cidade, receio que voce seja um ladrao -_-.\n";
                break;
            case 'o':
                cout << " Pra ser sincero nao tenho interesse em saber qual cidade e essa...\n";
                break;
            default:
                cout << " Acho que voce deveria tentar clicar nas opcoes disponiveis :|\n";
        }
    } while (cidade != 'v' && cidade != 'f' && cidade != 's' && cidade != 'o');

    cin.ignore();
    cout << "\n * Com o que voce trabalha? *\n -> ";
    getline(cin, trab);

    for (char &c : trab)
    {
        c = toupper(c);
    }

    if (trab == "PROGRAMACAO") {
        cout << "\n Hmm... Acho dificil de acreditar que alguem chamado " << nome << " trabalhe com programacao.\n";
    } else {
        cout << "\n Que pena " << nome << " ... Seu trabalho deve ser um saco!\n";
    }

    cout << "\n De qualquer forma, sempre da para buscar novas oportunidades, certo?\n";

    do {
        cout << "\n * Me diga, quantos anos voce tem (sem mentir) *\n -> ";
        cin >> idd;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " Nao tenha vergonha de dizer...\n";
            idd = 0;
        }
    } while (idd < 40);

    cout << "\n Entao, talvez buscar novas oportunidades nao seja mais para sua idade.\n Mas talvez seu time te salve da inutilidade total!";
    cout << "\n * Entao diga-me, para qual time voce torce? *\n -> ";
    cin.ignore();
    getline(cin, time);

    for (char &c : time)
    {
        c = toupper(c);
    }

    if (time == "SANTOS" || time == "VASCO") {
        cout << "Coitadinho de voce :(\n";
    } else {
        cout << "Eee... Time sem graca pra gente chata. Combina com voce!\n";
    }

    cout << "\n Devo dizer que voce e um sujeito meio estranho, sabe?";
    cout << "\n Seu nome (" << nome << ") e estranho; seu emprego (" << trab << ") e chato; seu time e lamentavel...";
    cout << "\n O que mais pode te tornar alguem interessante?";
    cout << "\n Que tal falarmos sobre comida?";
    cout << "\n * Voce gosta de comida japonesa? (s) para sim e (n) para nao. *\n -> ";
    cin >> resp1;
    resp1 = toupper(resp1);

    if (resp1 == 'S') {
        cout << "\n Que nojeira! Tanto churrasco bom por ai! Comida crua nem gosto tem!\n";
    } else {
        cout << "\n Ja era de se esperar. Alguem tao estranho dificilmente gostaria de culinaria sofisticada!\n";
    }

    cout << "\n Hmm... Estou ficando sem opcoes, voce nao coopera!";
    cout << "\n * Poderia me dizer ao menos se voce tem algum conjuge que te ame fora do computador? *";
    cout << "\n(s) para sim e (n) para nao.\n -> ";
    cin >> resp2;
    resp2 = toupper(resp2);

    if (resp2 == 'S') {
        cout << " Duvido muito, mas eu sou apenas uma maquina. Se voce diz...\n";
    } else {
        cout << " Ja era de se esperar. Ainda mais aos " << idd << " anos. Boa sorte!\n";
    }

    cout << "\n * Confesso que ja me cansei de voce. Tem algo de especial que queira dizer? *";
    cout << "\n (s) para sim e (n) para nao.\n -> ";
    cin >> resp3;
    resp3 = toupper(resp3);

    cin.ignore();

    if (resp3 == 'S') {
        cout << "\n Pode guardar para voce. Tchau!\n";
    } else {
        cout << "\n Sabia escolha, eu ja nao estava mais aguentando mesmo. Tchau!";
    }

    return 0;
}
