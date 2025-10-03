#include <iostream>
using namespace std;

int main() {
    // Declara um vetor com um tamanho bem definido: 5 posi��es (de 0 a 4).
    int vetor[5];

    cout << "Iniciando o experimento de escrita fora dos limites do vetor." << endl;
    cout << "O vetor foi declarado com 5 posi��es (�ndices 0 a 4)." << endl;
    cout << "---------------------------------------------------------" << endl;

    // La�o 'for' que tentar� escrever em posi��es crescentes.
    // O la�o n�o tem uma condi��o de parada �bvia, ele vai continuar at� o programa travar.
    for (int i = 0; ; ++i) {
        try {
            cout << "Tentando escrever o valor 60 na posicao " << i << "..." << endl;

            // A opera��o perigosa: acessar vetor[i]
            vetor[i] = 60;

            // Se chegou aqui, a escrita (aparentemente) funcionou.
            cout << "   -> Sucesso." << endl;

        }
        catch (...) {
            // Este bloco catch provavelmente n�o ser� executado, pois o erro
            // que estamos esperando (Segmentation Fault) geralmente n�o �
            // uma exce��o que pode ser capturada pelo C++. Ele termina o programa abruptamente.
            cout << "Uma excecao foi capturada na posicao " << i << endl;
            break;
        }
    }

    // Esta linha provavelmente nunca ser� alcan�ada.
    cout << "Fim do programa." << endl;

    return 0;
}

///Conclus�o: Escrever fora dos limites de um vetor � um dos erros mais perigosos em C/C++. O fato de que ele nem sempre causa um erro imediato torna-o extremamente dif�cil de depurar. 
///A melhor pr�tica � sempre garantir que seus la�os e acessos a �ndices nunca ultrapassem o tamanho do vetor.

/* N�o, a posi��o em que o programa trava n�o � garantida de ser sempre a mesma.
/* Ela pode variar dependendo de:
/* O compilador: Compiladores diferentes (ou vers�es diferentes do mesmo compilador) organizam a mem�ria de maneiras distintas.
/* O sistema operacional: A forma como o SO gerencia a mem�ria do processo.
/* As op��es de compila��o: Compilar com otimiza��es (-O2, -O3) ou em modo de depura��o (-g) pode mudar completamente o layout da mem�ria.
/* Outras vari�veis no c�digo: Se houvesse outras vari�veis declaradas perto do vetor, o programa poderia sobrescrev�-las antes de finalmente atingir uma �rea de mem�ria protegida.
*/