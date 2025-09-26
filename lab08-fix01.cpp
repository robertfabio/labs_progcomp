#include <iostream>
#include <iomanip> // Biblioteca necess�ria para formata��o de sa�da

using namespace std;

float IMC_float(float, float);
double IMC_double(double, double);

int main() {
    // CORRE��O: Valores ajustados para serem realistas.
    // Usando 'double' para maior precis�o desde o in�cio.
    double altura = 1.75;
    double peso = 80.0;

    cout << "Sua altura: " << altura << "m" << endl;
	cout << "Sua massa corporal: " << peso << "kg" << endl;
	cout << "--------------------------------------------" << endl;

    // A fun��o IMC_float ser� chamada com 6 casas decimais
	cout << "Seu IMC (float, 6 casas):   ";
	cout << fixed << setprecision(6) << IMC_float(peso, altura) << endl;

    // A fun��o IMC_double ser� chamada com 10 casas decimais
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