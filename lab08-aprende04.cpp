#include <iostream>
using namespace std;

int main(){
	float a = 3.78575f * 8.129338f; // arrendodamento
	cout << "O resultado de 3.78575 * 8.129338 = " << a << endl;
	float b = 3e30f + 2e15f; // absorção
	cout << "O resultado de 3e30 + 2e15 = " << b << endl;
	float c = 20518.56f * 2.0f;
	cout << "O resultado de 20518.56 * 2.0 = " << c << endl;
	float d = 3.14159f + 1.45f;
	cout << "O resultado de 3.14159 + 1.45 = " << d << endl;
	float e = 2.0f * 1e30f;
	cout << "O resultado de 2.0 * 1e30 = " << e << endl;
}