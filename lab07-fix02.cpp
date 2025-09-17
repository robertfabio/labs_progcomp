#include <iostream>
using namespace std;

void Alarme();
int Senha(int);

int main() {
	
	Alarme();
	cout << "Digite sua senha: ________\b\b\b\b\b\b\b\b";
	int senha; cin >> senha;
	Senha(senha);
	cout << "Obrigado!";

}

void Alarme() {

	cout << "Iniciando com um som... \a \a \a \a \a \n";

}

int Senha(int senha) {
	return senha;
}