#include <iostream>
#include <cmath>
using namespace std;

double px, py, P;
double qx, qy, Q;
double resultado;

int main() {
	cout << "Ponto P:" << endl;
	cin >> px;
	cin >> py;
	cout << "Ponto Q:" << endl;
	cin >> qx;
	cin >> qy;
	cout << endl;

	P = qx - px;
	P = P * P;
	Q = qy - py;
	Q = Q * Q;
	resultado = sqrt(P + Q);


	cout << "A distancia entre P e Q: " << resultado << endl;

	system("pause");
}