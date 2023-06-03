#include <iostream>
#include <string>

#define tam 10

using namespace std;

void iniciaPosFila(int *inicio, int *fim)
{
    *inicio = 0;
    *fim = -1;
}

void imprimeVetor(int vetor[tam], int tamanho)
{
    cout << endl;

    for (int cont = 0; cont < tam; cont++)
    {
        cout << vetor[cont] << endl;
    }
}

int retornaTamanho(int fim, int inicio)
{
    return (fim - inicio) + 1;
}

bool fichaCheia(int fim)
{
    if(fim == tam - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool filaVazia(int inicio, int fim)
{
    if (inicio > fim)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void enfileirar(int fila[tam], int valor, int *fim)
{
    if(fichaCheia(*fim))
    {
        cout << "FILA CHEIA!! ";
    }
    else
    {
        *fim = *fim + 1;
        fila[*fim] = valor;
    }
}

void desenfileirar(int fila[tam], int *inicio, int fim)
{
    if(filaVazia(*inicio, fim))
    {
        cout << cout << "IMPOSSIVEL DESINFEITAR FILA VAZIA !! ";

    }
    else
    {
        cout << "O valor " << fila[*inicio] << " foi removido " << endl;
        fila[*inicio] = 0;
        *inicio = *inicio + 1;
    }
}
int main(int argc, char** argv)
{
    int fila[tam] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int inicio, fim;

    iniciaPosFila(&inicio, &fim);

    enfileirar(fila, 10, &fim);
    enfileirar(fila, 9, &fim);
    enfileirar(fila, 8, &fim);
    enfileirar(fila, 7, &fim);
    enfileirar(fila, 6, &fim);
    enfileirar(fila, 5, &fim);
    enfileirar(fila, 4, &fim);
    enfileirar(fila, 3, &fim);
    enfileirar(fila, 2, &fim);
    enfileirar(fila, 1, &fim);

    imprimeVetor(fila, retornaTamanho(fim, inicio));

    desenfileirar(fila, &inicio, fim);
    desenfileirar(fila, &inicio, fim);
    desenfileirar(fila, &inicio, fim);

    imprimeVetor(fila, retornaTamanho(fim, inicio));

    return 0;
}
