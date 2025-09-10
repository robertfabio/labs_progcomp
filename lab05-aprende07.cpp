#include <iostream>
using namespace std;

double elevaAOquadrado(double);
double elevaAOcubo(double);


int main() {

	cout << "Digite um valor: ";
	double valor;
	cin >> valor;
	cout << endl;
	
	cout << "Quadrado = " << elevaAOquadrado(valor) << endl;
	cout << "Cubo = " << elevaAOcubo(valor) << endl;
	cout << "Cubo do quadrado = " << elevaAOcubo(elevaAOquadrado(valor));

}

double elevaAOquadrado(double valor) {
	return valor * valor;
}

double elevaAOcubo(double valor) {
	return valor * valor * valor;
}