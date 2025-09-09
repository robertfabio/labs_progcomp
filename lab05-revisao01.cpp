// versao 2
#include <iostream>
using namespace std;
void alarme();
void lerSenha();

int main()
{
	alarme();
	lerSenha();
}
void alarme()
{
	cout << "Iniciando...\n";
	cout << '\a';
}
void lerSenha()
{
	cout << "Senha: ";
	int senha;
	cin >> senha;
	cout << "Finalizando...";
	cout << '\a';
}


// versao 1
/*#include <iostream>
using namespace std;
void alarme();
int lerSenha();
int main()
{
	cout << "Iniciando...\n";
	alarme();
	cout << "Senha: ";
	int senha = lerSenha();
}
void alarme()
{
	cout << '\a';
}
int lerSenha()
{
	int n;
	cin >> n;
	return n;
} */
