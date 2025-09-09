#include <iostream>
using namespace std;

/*O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
percentagem do distribuidor e dos impostos (aplicados ao custo da fábrica).
Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%,
faça um programa para ler o custo de fábrica de um carro e escrever o custo ao
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