#include <iostream>
using namespace std;

void UmTres();
void Dois();


int main() {
	cout << "Come�ando agora: " << endl;
	UmTres();
	cout << endl;
	cout << "Pronto!";

}

void UmTres() {
	cout << "Um ";
	Dois();
	cout << "Tr�s ";
}
void Dois() {
	cout << "Dois ";;
}
