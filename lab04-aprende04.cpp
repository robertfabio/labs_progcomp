#include <iostream>
using namespace std;

float pi = 3.14159;
double raio, altura;
float V;

void VolumeCilindro();

int main() {

	cout << "Calcule o Volume de um cilindro" << endl;
	cout << "-------------------------------" << endl;
	cout << "Entre com o raio da base: ";
	cin >> raio;
	cout << "Entre com a altura: ";
	cin >> altura;
	VolumeCilindro();
	cout << "O volume do cilindro: " << V;

}

void VolumeCilindro() {

	V = pi * (raio * raio) * altura;

}