#include <iostream>
#include <cmath>
using namespace std;

double radicando(double, double, double);
void bhaskara(double, double, double);

int main() {

	double a, b, c;
	cout << "Digite 3 valores para fazer uma equacao quadratica" << endl;
	cin >> a >> b >> c;
	bhaskara(a, b, c);
}

void bhaskara(double a, double b, double c) {

	double bhaskara1, bhaskara2;
	double delta = radicando(a, b, c);
	if (delta > 0) {
		bhaskara1 = (-b + sqrt(delta)) / (2 * a);
		bhaskara2 = (-b - sqrt(delta)) / (2 * a);
		cout << "Duas raizes reais e distintas: " << bhaskara1 << " e " << bhaskara2 << endl;
	}
	else if (delta == 0) {
		bhaskara1 = (-b + sqrt(delta)) / (2 * a);
		cout << "Uma raiz real (duas raizes iguais): " << bhaskara1 << endl;
	}
	else {
		cout << "Nao ha raiz real." << endl;
	}
	
}

double radicando(double a, double b, double c) {

	double delta = (b * b) - (4 * a * c);
	return delta;
}


/*
Receba	como	argumentos	da	fun��o	os	termos	a,	b	e	c	da	equa��o	quadr�tica	e
mostre	o	resultado	dentro	da	pr�pria	fun��o.
F�rmula	de	Bhaskara:	 ? = !"�v"!!%&'
(&
A	quantidade	de	ra�zes	reais	de	uma	fun��o	quadr�tica	depende	do	valor	obtido
para	o	radicando ? = ?! - 4??, chamado	discriminante,	a	saber:
a) Quando	? �	positivo,	h�	duas	ra�zes	reais	e	distintas;
b) Quando	? �	zero,	h�	s�	uma	raiz	real	(h�	duas	ra�zes	iguais);
c) Quando	? �	negativo,	n�o	h�	raiz	real.
*/