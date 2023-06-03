//Desenvolva voce mesmo a 3 versao do algoritmo de ordenação bubble sort
//com o objetivo de ordenar os dados de forma decrecente

#include <iostream>



using namespace std;

void imprimeVetor(int x[])
{
     for (int i = 0; i <= 4; i++)
    {
        cout << i + 1 << "numero: " << x[i] << endl;
    }
}

void bubbleSort3(int x[])
{
    //ordenando de forma crescente
    //laço com a quantidade de elementos do vetor
    //e enquanto houver troca
    int n = 1;
    int troca = 1;
    int aux = 0;

    while(n <= 5 && troca == 1)
    {
        troca = 0;
        for(int i = 0; i <= 3; i++)
        {
            if(x[i] < x[i + 1])
            {
                troca = 1;
                aux = x[i];
                x[i] = x[i + 1];
                x[i + 1] = aux;
            }
        }
        n++;
    }
}

int main()
{
    int x[5];

    for (int i = 0; i <= 4; i++)
    {
        cout << "digite o numero: " << endl;
          cin >> x[i];
    }
    bubbleSort3(x);
    imprimeVetor(x);



    return 0;
}




