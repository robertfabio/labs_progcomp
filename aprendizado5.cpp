#include <iostream>
using namespace std;

int main() {


	char DoisPontos
	int Horas;
	int Minutos;


	cout << "Que horas são? ";
	cin >> Horas >> DoisPontos >> Minutos;

	cout << "O seu relogio está atrasado"<< endl;
	cout << "Agora são " << Horas + 1 << DoisPontos << Minutos;

}