#include <iostream>
using namespace std;

double aumentarSalario(double);

int main() {
	system("chcp 1252 > nul");

	cout << "Salário atual: R$";
	double salarioAtual;
	cin >> salarioAtual;
	cout << "Salário ajustado para: R$" << aumentarSalario(salarioAtual);
}

double aumentarSalario(double aumento) {
	
	aumento = aumento * 1.15;

	return aumento;
}