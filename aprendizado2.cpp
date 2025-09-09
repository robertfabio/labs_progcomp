/*
Tabuada de n
------------
Entre com um número n (0 a 9): 2
2 x 0 = 0
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
*/
#include <iostream>
using namespace std;

int main() {

	int numero;
	cout << "Tabuada do n\n";
	cout << "------------";
	cout << "\nEntre com um numero n (0 a 9): ";
	cin >> numero;
	cout << numero << " x " << 0 << " = " << numero * 0 << endl;
	cout << numero << " x " << 1 << " = " << numero * 1 << endl;
	cout << numero << " x " << 2 << " = " << numero * 2 << endl;
	cout << numero << " x " << 3 << " = " << numero * 3 << endl;
	cout << numero << " x " << 4 << " = " << numero * 4 << endl;
	cout << numero << " x " << 5 << " = " << numero * 5 << endl;
	cout << numero << " x " << 6 << " = " << numero * 6 << endl;
	cout << numero << " x " << 7 << " = " << numero * 7 << endl;
	cout << numero << " x " << 8 << " = " << numero * 8 << endl;
	cout << numero << " x " << 9 << " = " << numero * 9 << endl;

	system("pause");
	return 0;
}