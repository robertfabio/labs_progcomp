#include <iostream>
#include <Windows.h>5
using namespace std;

char codificar(unsigned char);
char decodificar(unsigned char);

int main() {

	cout << "Quer descodificar ou codifiar a letra? (0 ou 1)" << endl;
	bool resposta;
	cin >> resposta;
	unsigned char caractere;
	cout << "Digite um caractere: ";
	cin >> caractere;
	if (resposta == true)
		caractere = codificar(caractere);
	else
		caractere = decodificar(caractere);
	cout << endl;
	cout << "Novo caractere: " << caractere;

}

char codificar(unsigned char caractere) {
	cout << "Codificando";
	for (int i = 0; i < 6; i++) {
		cout << ".";
		cout.flush();
		Sleep(300);
	}
	return caractere + 3;
}
char decodificar(unsigned char caractere) {
	cout << "Descodificando";
	for (int i = 0; i < 6; i++) {
		cout << ".";
		cout.flush();
		Sleep(300);
	}
	return caractere - 3;
}
