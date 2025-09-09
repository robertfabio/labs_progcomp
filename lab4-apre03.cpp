#include <iostream>
using namespace std;

void media();
double valor1, valor2, m;

int main() {
	
	cout << "Digite o primeiro valor: " << endl;
	cin >> valor1;
	cout << "Digite o segundo valor: " << endl;
	cin >> valor2;
	media();
	cout << "A media dos numeros: " << m;

}
void media() {

	m = (valor1 + valor2) / 2;

}