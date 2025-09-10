#include <iostream>
using namespace std;

float PI = 3.14159;

double vetor(double, double);
double angulo(double, double);

double vetor(double x, double y) {

	double valor;

	valor = sqrt(pow(x, 2) + pow(y, 2));

	return valor;
}

double angulo(double x, double  y) {

	double graus;

	graus = (atan2(y, x) * 180) / PI;

	return graus;
}