#include <iostream>
#include <cmath>
using namespace std;

float PI = 3.14159;
double angulo(double, double);

int main() {
	system("chcp 1252 > nul");

	cout << "Digite as coordenadas do vetor: \n";
	cout << "x: ";
	double x;
	cin >> x;
	cout << "y: ";
	double y;
	cin >> y;
	cout << endl;
	cout << "O ângulo do vetor é: " << angulo(x, y);
} 

double angulo(double x, double  y) {

	double graus;

	graus = (atan2(y, x) * 180) / PI;
	
	return graus;
}