#include <iostream>
#include <cmath>
using namespace std;

int numero;

void absoluto();
int valor;
int valorabsoluto;

int main() {

	cout <<"Digite um numero inteiro: ";
	cin >> numero;
	absoluto();
	cout << "O valor absoluto: " << valorabsoluto << endl;

	system("pause");
	
}

void absoluto() {
	
	valor = pow(numero, 2);
	valorabsoluto = sqrt(valor);

}