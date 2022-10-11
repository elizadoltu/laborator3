#include <iostream>
#include <cstring>
using namespace std;

struct sah {

	char jucatorAlb[40];
	char jucatorNegru[40];
	char urmatorul;
	char tabla[9][9];

};

int main() {

	cout << "Joc de sah - initializare" << '\n';
	sah joc;
	strcpy(joc.jucatorAlb, "Ion Albu");
	strcpy(joc.jucatorNegru, "Irina Negru");

	joc.urmatorul = 'A';
	unsigned int i, j;
	for (i = 0; i < 8; ++i)
		strcpy(joc.tabla[i], "        ");
	for (i = 0; i < 8; ++i)
		joc.tabla[1][i] = 'P';
	strcpy(joc.tabla[6], "pppppppp");
	strcpy(joc.tabla[0], "TCNDRNCT");
	strcpy(joc.tabla[7], "tcndrnct");

	for (i = 7; i >= 0; --i) {
		for (j = 0; j <= 7; ++j)
			cout << joc.tabla[i][j];
		cout << '\n';
	}
	return 0;
}
