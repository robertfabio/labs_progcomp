#include <iostream>
using namespace std;

int horas;
int minutos;
void time();

int main() {
	cout << "Entre com o numero de horas: ";
	cin >> horas;
	cout << "Entre com o numero de minutos: ";
	cin >> minutos;
	time();
}

void time() {
	cout << "Agora sao " << horas << ":" << minutos;
}
