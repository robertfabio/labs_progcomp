#include <iostream>
using namespace std;
#define PAO 0.30
#define PASTEL 0.25
int main() {
	system("chcp 1252 > nul");
	cout << "P�es$Cia" << endl << endl;
	cout << "Quantos p�es? ";
	double p;
	cin >> p;
	cout << "Quantos past�is? ";
	double pt;
	cin >> pt;
	cout << endl;
	double total = (p * PAO) + (pt * PASTEL);
	cout << "O total das compras � " << "R$" << total;
}