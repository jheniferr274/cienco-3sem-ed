/*1. Escreva um programa em C++ que permita a leitura dos nomes de 10
pessoas e armazene os nomes lidos em um vetor. Após isto, o algoritmo
deve permitir a leitura de mais 1 nome qualquer de pessoa e depois
escrever a mensagem ACHEI, se o nome estiver entre os 10 nomes lidos
anteriormente (guardados no vetor), ou NÃO ACHEI caso contrário*/

#include <iostream>
#include <string>
#define NOME 10

using namespace std;


int main()
{
    int indice = 0;
    string vetor[NOME];
    string tentativa;
    bool achei = false;
    int contador = 0;

    while (indice < NOME)
    {
        cout << "Entre com um nome " << indice + 1 << ": " << endl;
        cin >> vetor[indice];
        indice = indice + 1;
    }

    cout << "---------------------------------" << endl;

    cout << "Tente acertar um nome: ";
    cin >> tentativa;

    for(int i = 0; i < 10; i++)
    {
        if(vetor[i] == tentativa)
        {
            achei = true;
        }
    }

    if (achei == true)
    {
        cout << "Achei!";
    }
    else
    {
        cout << "Nao achei!!";
    }
}


