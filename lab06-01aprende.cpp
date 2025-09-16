#include <iostream>
using namespace std;

int main() {

	int horas_p, min_p;
	int horas_c, min_c;
	char p, c;
	cout << "Digite o horário de partida(HH:MM) : ";
	cin >> horas_p >> p >> min_p;
	cout << "Digite o horário de chegada(HH:MM) : ";
	cin >> horas_c >> c >> min_c;
	cout << endl;
	
	
	if (min_p > min_c) {
		min_c += 60;
		horas_c -= 1;
	}
	min_c = min_c - min_p;

	// Caso passe de 00:00
	if (horas_c < horas_p) {
		horas_c += 24;
	}
	horas_c = horas_c - horas_p;
	

	cout << "O tempo total de viagem foi: " << horas_c << " horas e " << min_c << " min.";
}