#include <iostream>
using namespace std;

int main()
{



	int anos;
	int cigarros;
	float Pcigarros;
	double gasto;
	cout << "A quantos anos voce fuma? ";
	cin >> anos;
	cout << "Quantos cigarros voce fuma por dia? ";
	cin >> cigarros;
	cout << "Qual o preco medio da carteira de cigarro? ";
	cin >> Pcigarros;

	anos = anos * 365;
	cigarros = cigarros * anos;
	gasto = Pcigarros * cigarros / 20;

	cout << "Voce gastou ate agora R$" << gasto << " com cigarros." << endl;

	system("pause");
	return 0;
}
