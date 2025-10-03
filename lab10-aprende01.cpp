#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	int vetor[5]{ 10, 80, 30, 45, 15};

	cout << "Vetor: " << vetor[0] << " " << vetor[1] << " " << vetor[2] << " " << vetor[3] << " " << vetor[4];
	cout << "\n---------------------";
	cout << "\nAlterar posição: ";
	int posicao;
	cin >> posicao;
	cout << "Novo valor: ";
	int novoValor;
	cin >> novoValor;
	vetor[posicao] = novoValor;
	cout << "---------------------\n";
	cout << "Vetor: " << vetor[0] << " " << vetor[1] << " " << vetor[2] << " " << vetor[3] << " " << vetor[4];
}


