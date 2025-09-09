/*

A energia gasta em calorias com uma atividade aer�bica qualquer obedece �
equa��o: E = METS � PESO � (Tempo de Atividade / 60). O tempo � dado em
minutos. O peso � dado em quilos. METS significa capacidade aer�bica e depende
do tipo de exerc�cio. Ciclismo ou corrida leve tem pontua��o METS = 7.0. A Nata��o
tem pontua��o METS = 8.0.
Um usu�rio deve entrar com seu peso, quanto tempo ele corre por semana, quanto
tempo ele pedala por semana e quanto tempo ele nada por semana. O seu
programa deve retornar o n�mero de calorias que este usu�rio queima por semana
com exerc�cios f�sicos.

*/
#include <iostream>
using namespace std;

int main() {

	double peso;
	double H_corrida, M_corrida;
	double H_ciclismo, M_ciclismo;
	double H_natacao, M_natacao;
	double METS7 = 7.0;
	double METS8 = 8.0;
	float calc1, calc2, calc3;
	float resultado;
	char h_char, m_char;
	double minutos_total_corrida;
	double minutos_total_ciclismo;
	double minutos_total_natacao;

	cout << "Digite seu peso em quilos: \n";
	cin >> peso;
	cout << "Digite o tempo de corrida: \n";
	cin >> H_corrida >> h_char >> M_corrida >> m_char;
	cout << "Digite o tempo de ciclismo: \n";
	cin >> H_ciclismo >> h_char >> M_ciclismo >> m_char;
	cout << "Digite o tempo de natacao: \n";
	cin >> H_natacao >> h_char >> M_natacao >> m_char;

	minutos_total_corrida = (H_corrida * 60) + M_corrida;
	minutos_total_ciclismo = (H_ciclismo * 60) + M_ciclismo;
	minutos_total_natacao = (H_natacao * 60) + M_natacao;

	calc1 = METS7 * peso * (minutos_total_corrida / 60);
	calc2 = METS7 * peso * (minutos_total_ciclismo / 60);
	calc3 = METS8 * peso * (minutos_total_natacao / 60);

	resultado = calc1 + calc2 + calc3;

	cout << "Voc� gastou um total de " << resultado << " calorias";

	cout << "\nPressione Enter para sair...";
	cin.ignore();
	cin.get();

	return 0;

}