#include <iostream>
using namespace std;

int main() {

	short a = 0;
	int b = 0;
	long c = 0;
	long long d = 0;

	int total = sizeof(short) + sizeof(int) + sizeof(long) + sizeof(long long);

	cout << "short:           " << sizeof(short) << " bytes" << endl;
	cout << "int:             " << sizeof(int) << " bytes" << endl;
	cout << "long:            " << sizeof(long) << " bytes" << endl;
	cout << "long long:       " << sizeof(long long) << " bytes" << endl;
	cout << "Total:           " << total << " bytes";

}