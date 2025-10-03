#include <iostream>
using namespace std;

bool testarBit(unsigned char, int);
void exibirBits(unsigned char);

int main() {
    int entrada;
    cout << "Digite um valor para converter em bits (0 a 255): ";
    cin >> entrada;

    cout << "Valor em bits: ";
    exibirBits(entrada);
    cout << endl;
    cout << "Bit 0:"<< testarBit(entrada, 0) << endl;
    cout << "Bit 1:" << testarBit(entrada, 1)<< endl;
    cout << "Bit 2:" << testarBit(entrada, 2)<< endl;
    cout << "Bit 3:"<< testarBit(entrada, 3)<< endl;
    cout << "Bit 4:"<< testarBit(entrada, 4)<< endl;
    cout << "Bit 7: " << testarBit(entrada, 6)<< endl;
    cout << "Bit 7: " << testarBit(entrada, 5) << endl;
    cout << "Bit 7: " << testarBit(entrada, 7) << endl;

    return 0;
}

bool testarBit(unsigned char valor, int posicao) {
    return (valor >> posicao) & 1;
}

void exibirBits(unsigned char valor) {

    for (int i = 7; i >= 0; i--) {
        if (testarBit(valor, i)) {
            cout << '1';
        }
        else {
            cout << '0';
        }
    }
}