#include <iostream>
using namespace std;

double IMC(double, double);

int main() {
	system("chcp 1252 > nul");
	cout << "Indice de Massa Corporal (IMC)\n";
	cout << "------------------------------\n";
	cout << "Altura: ";
	double altura;
	cin >> altura;
	cout << "Massa: ";
	double massa;
	cin >> massa;
	cout << "IMC: " << IMC(altura, massa);
}

double IMC(double altura, double massa) {

	double imc;
	imc = massa / (altura * altura);

	return imc;
}