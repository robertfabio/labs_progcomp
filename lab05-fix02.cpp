#include <iostream>
using namespace std;

void CparaF();
double Celsius;
double Fahrenheit;

int main() {
	cout << "Digite uma temperatura em graus Celsius: ";
	cin >> Celsius;
	CparaF();

}
void CparaF() {
	Fahrenheit = 1.8 * Celsius + 32.0;
	cout << Celsius << " graus Celsius equivalem a " << Fahrenheit << " graus Fahrenheit";
}