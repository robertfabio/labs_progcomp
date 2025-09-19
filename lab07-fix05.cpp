#include <iostream>
using namespace std;

void ligarBit(unsigned char&, int);
void desligarBit(unsigned char&, int);
bool testarBit(unsigned char&, int );

int main() {

	unsigned char bit = 0;
	int posicao = 0;
	cout << "Ligar qual bit? " << endl;
	cin >> posicao;
	if (posicao >= 0 && posicao <= 7) {
	}
	else {
		cout << "Posição inválida! Use 0 a 7." << endl;
	}
	ligarBit(bit, posicao);
	cout << "Olhe qual bit voce ligou: " << int(bit) << endl;
	cout << endl;
	if (testarBit(bit, posicao)) {
		cout << "O bit está ligado viiuuuuuuu" << endl;
	}
	cout << "Quer desligar qual bit?" << endl;
	cin >> posicao;
	desligarBit(bit, posicao);
	cout << "Olhe qual bit voce desligou: " << int(bit) << endl;
	cout << endl;

}

void ligarBit(unsigned char &valor, int posicao) {
	valor |= (1 << posicao);
};
void desligarBit(unsigned char &valor, int posicao) {
	valor &= ~(1 << posicao);
};
bool testarBit(unsigned char &valor, int posicao) {
	return (valor & (1 << posicao)) != 0;
};