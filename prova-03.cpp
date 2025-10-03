#include <iostream>
using namespace std;

int main() {
	cout << "Minutos trabalhados: ";
	int minutos;
	cin >> minutos;	
	const int horas = 60;
	int horas_h, horas_m;
	horas_h = minutos / horas;
	horas_m = minutos % horas;
	cout << minutos << " minutos equivalem a " << horas_h << " hora(s) e " << horas_m << " minuto(s)." << endl;

}