#include <iostream>
#include <iomanip> // Biblioteca necessária para formatação de saída

using namespace std;

float IMC_float(float, float);
double IMC_double(double, double);

int main() {
    // CORREÇÃO: Valores ajustados para serem realistas.
    // Usando 'double' para maior precisão desde o início.
    double altura = 1.75;
    double peso = 80.0;

    cout << "Sua altura: " << altura << "m" << endl;
	cout << "Sua massa corporal: " << peso << "kg" << endl;
	cout << "--------------------------------------------" << endl;

    // A função IMC_float será chamada com 6 casas decimais
	cout << "Seu IMC (float, 6 casas):   ";
	cout << fixed << setprecision(6) << IMC_float(peso, altura) << endl;

    // A função IMC_double será chamada com 10 casas decimais
	cout << "Seu IMC (double, 10 casas): ";
	cout << fixed << setprecision(10) << IMC_double(peso, altura) << endl;

    return 0;
}

float IMC_float(float peso, float altura) {
	return peso / (altura * altura);
}

double IMC_double(double peso, double altura) {
	return peso / (altura * altura);
}