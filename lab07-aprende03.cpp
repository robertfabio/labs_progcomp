#include <iostream>
using namespace std;

void bitsBaixos(int);

int main() {
	
	cout << "Digite um valor inteiro: ";
	int valor; cin >> valor;
	bitsBaixos(valor);
	return 0;
}

void bitsBaixos(int valor) {

	int mascara = 65535;
	valor = (valor & mascara);
	cout << "Os 16 bits mais baixos desse valor correspondem ao valor: " << valor;
	cout << endl;
}