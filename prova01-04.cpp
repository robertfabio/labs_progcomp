#include <iostream>
using namespace std;

int tempo(int, int);
double calorias(int, int);

int main() {

	cout << "Peso (Kg): ";
	double peso;
	cin >> peso;
	cout << "Tempo de corrida: ";
	int horas, minutos;
	char separador;
	cin >> horas >> separador >> minutos;
	int totalTempo = tempo(horas, minutos);
	double totalCalorias = calorias(peso, totalTempo);
	cout << "Voce gastou um total de " << totalCalorias << " calorias.";
	
}

int tempo(int horas, int minutos) {
	return horas * 60 + minutos;
}

double calorias(int peso, int tempo) {
	return 7.0 * peso * (tempo / 60.0);
}