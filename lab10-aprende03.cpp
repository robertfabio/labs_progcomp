#include <iostream>
using namespace std;

double vetorado(double, double, double);

int main() {

	double vetor[3]{};
	cout << "Digite 3 valores: ";
	cin >> vetor[0] >> vetor[1] >> vetor[2];
	cout << "O resultado do vetorado eh: " << vetorado(vetor[0], vetor[1], vetor[2]) << endl;
}

double vetorado(double x, double y, double z) {
	return (x * z) - y;
}