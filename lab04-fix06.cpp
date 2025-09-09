#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void Inicializar();
void ligar();
void verificar();
void ativar();

int main() {

	Inicializar();

	system("pause");

}

void Inicializar() {
	cout << "Inicilizando Sistema: " << endl;
	ligar();
	verificar();
	ativar();
	cout << "Inicializacao concluida. " << endl << endl;
	srand(time(NULL));
	int random = ((rand)());
	if (random >= 16384)
		cout << "Sistema em funcionamento" << endl;
	if (random < 16384)
		cout << "Falha na inicializacao" << endl;


}
void ligar() {
	cout << "- Ligando dispostivos" << endl;
}
void verificar() {
	cout << "- Verificando integridade" << endl;
}
void ativar() {
	cout << "- Ativando processos" << endl;
}
