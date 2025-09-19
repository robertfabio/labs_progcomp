#include <iostream>
using namespace std;

void bitsAltos(unsigned int);

int main() {

	cout << "Digite um valor inteiro: ";
	int valor; cin >> valor;
	bitsAltos(valor);
	return 0;
}

void bitsAltos(unsigned int valor) {

	unsigned int mascara = 65535 * 65536;
	valor = (valor & mascara) >> 16;
	cout << "Os 16 bits mais altos desse valor correspondem ao valor: " << valor;
	cout << endl;
}