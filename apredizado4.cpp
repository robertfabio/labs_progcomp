#include <iostream>
using namespace std;

/*O custo de um carro novo ao consumidor � a soma do custo de f�brica com a
percentagem do distribuidor e dos impostos (aplicados ao custo da f�brica).
Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%,
fa�a um programa para ler o custo de f�brica de um carro e escrever o custo ao
consumidor.*/



int main() {

	double porcentagemDistribuidor;
	double porcentagemImposto;
	double custoFabrica;
	double carroNovo;

	cout << "Digite o custo de fabrica do carro: \n";
	cin >> custoFabrica;

	carroNovo = custoFabrica + (custoFabrica * 0.28) + (custoFabrica * 0.45);
	cout << "O custo do consumidor: " << carroNovo;


}