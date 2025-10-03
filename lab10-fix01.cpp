#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double valor[3]{ 1.50, 2.00, 1.00 };
	double quantidade[3]{};

	cout << "Prezado Cliente,\nDigite a quantidade de quilos desejados: \n";
	cout << "Alface: ";
	cin >> quantidade[0];
	cout << "Beterraba: ";
	cin >> quantidade[1];
	cout << "Cenoura: ";
	cin >> quantidade[2];

	cout << endl;

	cout << fixed << setprecision(2);
	cout << "Resumo da Compra\n--------------------\n";
	cout << "Alface      = " << "R$" << quantidade[0] * valor[0] << endl;
	cout << "Beterraba   = " << "R$" << quantidade[1] * valor[1] << endl;
	cout << "Cenoura     = " << "R$" << quantidade[2] * valor[2] << endl;
	cout << "--------------------\n";
	cout << "Total       = " << "R$" << (quantidade[0] * valor[0]) + (quantidade[1] * valor[1]) + (quantidade[2] * valor[2]) << endl;

}