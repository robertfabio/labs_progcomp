#include <iostream>
#include <Windows.h>
using namespace std;

char codificar(unsigned char);
char decodificar(unsigned char);

int main() {

	unsigned char caractere;
	cout << "Digite um caractere: ";
	cin >> caractere;
	caractere = codificar(caractere);
	cout << endl;
	cout << "Novo caractere: " << caractere << endl;
	cout << endl;

	cout << "Descodificando";
	for (int i = 0; i < 6 ; i++) {
		cout << ".";
		cout.flush(); 
		Sleep(300);
	}
	caractere = decodificar(caractere);
	cout << endl;
	cout << "Mostrar decodificado: " << caractere;



}

char codificar(unsigned char caractere) {
	return caractere + 3;
}
char decodificar(unsigned char caractere) {
	return caractere - 3;
}
