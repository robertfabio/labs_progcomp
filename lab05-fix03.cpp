#include <iostream>
using namespace std;

double n1, n2, mediah;
void MEDIA();

int main() {
	cout << "Entre com um numero: ";
	cin >> n1;
	cout << "Entre com outro numero: ";
	cin >> n2;
	MEDIA();
}

void MEDIA() {
	mediah = 2.0 * n1 * n2 / (n1 + n2);
	cout << "A media harmonica dos numeros: " << mediah;
}