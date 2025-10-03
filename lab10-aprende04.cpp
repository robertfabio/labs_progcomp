#include <iostream>
using namespace std;

int main() {
    // Declara um vetor com um tamanho bem definido: 5 posições (de 0 a 4).
    int vetor[5];

    cout << "Iniciando o experimento de escrita fora dos limites do vetor." << endl;
    cout << "O vetor foi declarado com 5 posições (índices 0 a 4)." << endl;
    cout << "---------------------------------------------------------" << endl;

    // Laço 'for' que tentará escrever em posições crescentes.
    // O laço não tem uma condição de parada óbvia, ele vai continuar até o programa travar.
    for (int i = 0; ; ++i) {
        try {
            cout << "Tentando escrever o valor 60 na posicao " << i << "..." << endl;

            // A operação perigosa: acessar vetor[i]
            vetor[i] = 60;

            // Se chegou aqui, a escrita (aparentemente) funcionou.
            cout << "   -> Sucesso." << endl;

        }
        catch (...) {
            // Este bloco catch provavelmente não será executado, pois o erro
            // que estamos esperando (Segmentation Fault) geralmente não é
            // uma exceção que pode ser capturada pelo C++. Ele termina o programa abruptamente.
            cout << "Uma excecao foi capturada na posicao " << i << endl;
            break;
        }
    }

    // Esta linha provavelmente nunca será alcançada.
    cout << "Fim do programa." << endl;

    return 0;
}

///Conclusão: Escrever fora dos limites de um vetor é um dos erros mais perigosos em C/C++. O fato de que ele nem sempre causa um erro imediato torna-o extremamente difícil de depurar. 
///A melhor prática é sempre garantir que seus laços e acessos a índices nunca ultrapassem o tamanho do vetor.

/* Não, a posição em que o programa trava não é garantida de ser sempre a mesma.
/* Ela pode variar dependendo de:
/* O compilador: Compiladores diferentes (ou versões diferentes do mesmo compilador) organizam a memória de maneiras distintas.
/* O sistema operacional: A forma como o SO gerencia a memória do processo.
/* As opções de compilação: Compilar com otimizações (-O2, -O3) ou em modo de depuração (-g) pode mudar completamente o layout da memória.
/* Outras variáveis no código: Se houvesse outras variáveis declaradas perto do vetor, o programa poderia sobrescrevê-las antes de finalmente atingir uma área de memória protegida.
*/