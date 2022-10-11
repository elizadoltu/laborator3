#include <iostream>
using namespace std;

struct numarComplex {

	int parteReala;
	int parteImaginara;
};

void adunare(numarComplex a, numarComplex b) {
	
	numarComplex c;
	c.parteReala = a.parteReala + b.parteReala;
	c.parteImaginara = a.parteReala + b.parteImaginara;

	cout << "Adunarea numerelor a si b " << c.parteReala << '+' << c.parteImaginara << '\n';
}

void scadere(numarComplex a, numarComplex b) {

	numarComplex c;
	c.parteReala = a.parteReala - b.parteReala;
	c.parteImaginara = a.parteReala - b.parteImaginara;

	cout << "Scaderea numerelor a si b " << c.parteReala << '+' << c.parteImaginara << '\n';
}

void inmultire(numarComplex a, numarComplex b) {

	numarComplex c;
	c.parteReala = a.parteReala * b.parteReala - a.parteImaginara * b.parteImaginara;
	c.parteImaginara = a.parteReala * b.parteImaginara + a.parteImaginara * b.parteReala;

	cout << "Inmultirea numerelor a si b " << c.parteReala << '+' << c.parteImaginara << '\n';
}

void impartire(numarComplex a, numarComplex b) {

	numarComplex c;
	c.parteReala = (a.parteReala * b.parteReala + a.parteImaginara * b.parteImaginara) / 
		(a.parteReala * a.parteReala + a.parteImaginara * a.parteImaginara + b.parteReala * b.parteReala + b.parteImaginara * b.parteImaginara);
	c.parteImaginara = (b.parteReala * a.parteImaginara - a.parteReala * b.parteImaginara) / 
		(a.parteReala * a.parteReala + a.parteImaginara * a.parteImaginara + b.parteReala * b.parteReala + b.parteImaginara * b.parteImaginara);

	cout << "Impartirea numerelor a si b " << c.parteReala << '+' << c.parteImaginara << '\n';
}

int main() {

	numarComplex x, y;
	cin >> x.parteReala >> x.parteImaginara;
	cin >> y.parteReala >> y.parteImaginara;
	adunare(x, y);
	scadere(x, y);
	inmultire(x, y);
	impartire(x, y);

	return 0;
}
