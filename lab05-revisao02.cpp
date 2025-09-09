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
}/* Qual é a ordem de chamada das funções dentro da função principal? Ou
seja, quem será chamada primeiro, f() ou g()? */// f() sera chamado primeiro, 4 + 2 + 2 = 8/* Qual é o resultado do programa? Ele seria o mesmo se invertêssemos a
ordem das chamadas de f() e g() dentro da função principal?resultado = 8; sim, fica 12 alterando a chamada. *//* Existe alguma garantia de que as funções f() e g() serão sempre chamadas
na ordem em que elas aparecem no programa?	Sim, por ser estruturado				*/