#include <iostream>
using namespace std;

char ASCII(int);

int main()
{
    int ch;
    cout << "Digite um caractere para mostrar seu c�digo ASCII: ";
    cin >> ch;

    cout << "O c�digo ASCII para " << ch << " -> " << ASCII(ch) << endl;
}

char ASCII(int ch) {
    return ch;
}