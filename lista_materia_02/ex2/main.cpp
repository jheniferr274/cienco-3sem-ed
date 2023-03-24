#include <iostream>



using namespace std;

#define notas 20

float mediaValoresVetor(int vet[], int tam)
{
    float soma = 0;
    for(int i = 0; i < notas; i++)
    {
        soma += vet[i];
    }
    return soma/ tam;
}

int main()
{
    int vet[notas], acima = 0;
    float media;

    for(int i = 0; i < notas; i++)
    {
        cout << "digite a nota: " << i + 1 << " : ";
        cin >> vet[i];
    }

    media = mediaValoresVetor(vet, notas);
    cout << "\nMedia: " << media << endl;

    for(int i = 0; i < notas; i++)
    {
        if(vet[i] > media)
        {
            acima++;
        }
    }
    cout << "valores acima da media: " << acima << endl;
    cout << "valores abaixo da media: " << notas - acima << endl;

    return 0;
}
