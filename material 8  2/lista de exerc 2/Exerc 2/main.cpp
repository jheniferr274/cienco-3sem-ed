/*2. Escreva um programa em C++ que permita a leitura das notas de uma
turma de 20 alunos Calcular a média da turma e contar quantos alunos
obtiveram nota acima desta média calculada Escrever a média da turma
e o resultado da contagem*/

#include <iostream>

using namespace std;

#define NOTAS 20

float mediaValoresVetor(int vet[], int tam)
{
    float soma = 0;
    for (int i = 0; i < NOTAS; i++)
    {
        soma += vet[i];
    }
    return soma/tam;
}


int main()
{
    int vet[NOTAS], acima = 0;
    float media;

    for(int i = 0; i < NOTAS; i++)
    {
        cout << "Digite a nota " << i + 1 << "; " << endl;
        cin >> vet[i];
    }

    media = mediaValoresVetor(vet, NOTAS);
    cout << "Media: " << media << endl;

    for(int i = 0; i < NOTAS; i++)
    {
        if(vet[i] > media)
        {
            acima++;
        }
    }
    cout << "Valores acima da media: " << acima << endl;


    return 0;

}
