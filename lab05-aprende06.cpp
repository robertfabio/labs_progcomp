#include <iostream>
#include "arquivos.h"
using namespace std;

int main() {
	cout << "Digite as coordenadas do vetor: \n";
	double x;
	cout << "x: ";
	cin >> x;
	double y;
	cout << "y : ";
	cin >> y;
	cout << endl;

	cout << "Coordenadas polares do vetor: \n" << angulo(x, y) << " " << vetor(x, y);
}