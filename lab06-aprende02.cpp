#include <iostream>
using namespace std;
#define PAO 0.30
#define PASTEL 0.25
int main() {
	system("chcp 1252 > nul");
	cout << "Pães$Cia" << endl << endl;
	cout << "Quantos pães? ";
	double p;
	cin >> p;
	cout << "Quantos pastéis? ";
	double pt;
	cin >> pt;
	cout << endl;
	double total = (p * PAO) + (pt * PASTEL);
	cout << "O total das compras é " << "R$" << total;
}