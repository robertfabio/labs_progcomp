#include <iostream>
using namespace std;

double aumentarSalario(double);

int main() {
	system("chcp 1252 > nul");

	cout << "Sal�rio atual: R$";
	double salarioAtual;
	cin >> salarioAtual;
	cout << "Sal�rio ajustado para: R$" << aumentarSalario(salarioAtual);
}

double aumentarSalario(double aumento) {
	
	aumento = aumento * 1.15;

	return aumento;
}