/*5. Faça um programa em C++ para ler um valor N qualquer (que será o
tamanho dos vetores) Após, ler dois vetores A e B (de tamanho N cada um)
e depois armazenar em um terceiro vetor Soma a soma dos elementos do
vetor A com os do vetor B (respeitando as mesmas posições) e escrever o
vetor Soma*/

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int valorN=0;

    srand(time(NULL));

    cout << "Entre com o valor N: ";
    cin >> valorN;

    int vetorA[valorN];
    int vetorB[valorN];
    int vetorSoma[valorN];

    for(int i = 0; i < valorN; i++)
    {
        vetorA[i] = (rand() % valorN);
        vetorB[i] = (rand() % valorN);
         vetorSoma[i] = vetorA[i] + vetorB[i];
    }
    for(int i = 0; i < valorN; i++)
    {
        cout << " " << i << " -> " << vetorA[i] << " + " << vetorB[i] << " = " << vetorSoma[i] << endl;
    }


    }





