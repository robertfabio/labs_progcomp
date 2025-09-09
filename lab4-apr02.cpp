#include <iostream>
#include <cmath>
using namespace std;

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    double angulo;

    cout << "Digite o angulo em graus para descobrir o seno: ";
    cin >> angulo;

    double anguloRad = angulo * M_PI / 180.0;
    double seno = sin(anguloRad);

    cout << "sen(" << angulo << "°) = " << seno << endl;

    return 0;
}