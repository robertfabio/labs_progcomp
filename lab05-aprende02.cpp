#include <iostream>
using namespace std;
int num;
int f();
int g();
int main()
{
	num = 1;
	cout << g() + f() + num << endl;
}
int f()
{
	num = num + 3;
	return num;
}
int g()
{
	num = 2;
	return num;
}/* Qual � a ordem de chamada das fun��es dentro da fun��o principal? Ou
seja, quem ser� chamada primeiro, f() ou g()? */// f() sera chamado primeiro, 4 + 2 + 2 = 8/* Qual � o resultado do programa? Ele seria o mesmo se invert�ssemos a
ordem das chamadas de f() e g() dentro da fun��o principal?resultado = 8; sim, fica 12 alterando a chamada. *//* Existe alguma garantia de que as fun��es f() e g() ser�o sempre chamadas
na ordem em que elas aparecem no programa?	Sim, por ser estruturado				*/