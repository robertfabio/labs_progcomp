#include <iostream> 
using namespace std;

long long calculo(long long, long long);

int main()
{
	long long resultado = 200530LL * 420800LL;
	cout << "Direto: " << resultado << endl;
	cout << "Fun��o: " << calculo(200530LL, 420800LL) << endl;
	return 0;
}
	long long calculo(long long a, long long b)
{
	return a * b;
}