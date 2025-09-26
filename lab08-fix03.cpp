#include <iostream>
using namespace std;

float segundos(int);

int main() {

	cout << "Digite sua idade em anos: ";
	int anos;
	cin >> anos;
	cout.precision(1);
	cout << fixed << anos << " anos equivalem a " << segundos(anos) << " segundos." << endl;

}
float segundos(int anos) {
	
	return anos * 3.156e+7; // 3.156e+7 = 60 * 60 * 24 * 365.25
}