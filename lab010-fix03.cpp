#include <iostream>
using namespace std;

int somaVetor(int, int, int, int, int);

int main() {

	int vetor[5]{};

	cout << "Digite 5 valores: ";
	cin >> vetor[0] >> vetor[1] >> vetor[2] >> vetor[3] >> vetor[4];
	cout << "A soma dos valores do vetor = " << somaVetor(vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]) << endl;
}

int somaVetor(int a, int b, int c, int d, int e) {
	return a + b + c + d + e;
}

