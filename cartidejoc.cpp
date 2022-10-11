#include <iostream>
#include <cstdlib>
#include <ctime>
#define MAX_CARDS 52
using namespace std;

struct Valori {

    unsigned int maxValori = 13;
    string valori[13] = { "2", "3", "4", "5", "6", "7",
                       "8", "9", "10", "J", "Q", "K", "A" };
};

struct Simboluri {

    unsigned int maxSimboluri = 4;
    string simboluri[4] = { "Caro", "Trefla", "Cupa", "Pica" };
};

struct Carte {
    Valori values;
    Simboluri simbols;
};

void generarePachet() {

    Carte pachet[MAX_CARDS];
    for (unsigned int index = 0; index < MAX_CARDS; ++index) {
        cout << pachet[index].simbols.simboluri[index / 13] << ' ' << pachet[index].values.valori[index % 13]
           << '\n';
    }
    cout << "\\\\\\\\\\\\\\\\\\\\\\\\" << '\n';
}

void amestecarePachet() {

    srand(time(0));
    Carte pachet[MAX_CARDS];

    for (unsigned int index = 0; index < MAX_CARDS; ++index) {
        int random = rand() % 52;

        string tempSimb = pachet[index].simbols.simboluri[index / 13];
        string tempVal = pachet[index].values.valori[index % 13];

        pachet[index].simbols.simboluri[index / 13] = pachet[random].simbols.simboluri[random / 13];
        pachet[index].values.valori[index % 13] = pachet[random].values.valori[random % 13];

        pachet[random].simbols.simboluri[random / 13] = tempSimb;
        pachet[random].values.valori[random % 13] = tempVal;
    }
    for (unsigned int index = 0; index < MAX_CARDS; ++index) {
        cout << pachet[index].simbols.simboluri[index / 13] << ' ' << pachet[index].values.valori[index % 13]
            << '\n';
    }
}
int main() {

    generarePachet();
    amestecarePachet();
    return 0;
}
