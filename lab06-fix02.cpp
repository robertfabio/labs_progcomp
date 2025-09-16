#include <iostream>
using namespace std;

int main() {
	
	int km;
	int litros;
	cout << "Distancia percorrida (km): ";
	cin >> km;
	cout << "Litros de combustível: ";
	cin >> litros;
	litros = km / litros;
	cout << "O consumo do seu carro foi de " << litros << " km/litro";

}