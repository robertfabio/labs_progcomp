#include <iostream>
using namespace std;

int main() {

	double LadoA;
	double LadoB;
	double AreaBase;
	double Altura;
	double VolumePrisma;

	cout << "Lado a: ";
	cin >> LadoA;
	cout << "Lado b: ";
	cin >> LadoB;
	AreaBase = LadoA * LadoB;
	cout << "Area da base =" << AreaBase << endl;
	cout << "Altura: ";
	cin >> Altura;
	VolumePrisma = AreaBase * Altura;
	cout << "Volume do prisma = " << VolumePrisma<< endl;


	system("pause");
}