#include <iostream>
using namespace std;
float calcular_moleculas(float galoes);

int main() {
    
    cout << "Digite a quantidade de agua em galoes: ";
    float galoes_usuario;
    cin >> galoes_usuario;

    float resultado_moleculas = calcular_moleculas(galoes_usuario);

    cout.precision(4);
    cout << "Isso equivale a aproximadamente " << scientific << resultado_moleculas << " moleculas." << endl;

    return 0;
}

float calcular_moleculas(float galoes) {
    float moleculas_por_galao = 3800.0 / 3.0e-23;
    return galoes * moleculas_por_galao;
}