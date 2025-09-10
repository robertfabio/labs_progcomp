#include <iostream>
using namespace std;

double vetor(double, double);

int main() {
	system("chcp 1252 > nul");

	cout << "Digite as coordenadas do vetor: \n";
	cout << "x: ";
	double x;
	cin >> x;
	cout << "y: ";
	double y;
	cin >> y;
	cout << endl;
	cout << "O tamanho do vetor é: " << vetor(x, y);
}

double vetor(double x, double y) {

	double valor;
	
	valor = sqrt(pow(x, 2) + pow(y, 2));

	return valor;
}