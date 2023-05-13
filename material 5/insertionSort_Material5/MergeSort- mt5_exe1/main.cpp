#include <iostream>
#include <stdlib.h>
#include <string>

#define TAM 10

using namespace std;

void imprimeVetor(int vetor[])
{
    int i;
    for (i = 0; i <TAM; i++)
    {
        cout << " | " << vetor[i] << " | ";
    }
}

//junta os dois subarrays criados ao dividir o vetor principal
void merge(int vetor[TAM], int indicieEsquerdo, int meio, int indicieDireito)
{
    int i, j, k;

    int n1 = meio - indicieEsquerdo + 1; //tamanho do primeiro vetor auxiliar
    int n2 = indicieDireito - meio; //tamanho do segundo vetor auxiliar

    //cria dois arrays temporarios
    int vetorEsquerdo[n1], vetorDireito[n2];

    //passa os elemenos do vetor principal para o primeiro vetor auxiliar(esquerda)
    for(i = 0; i < n1; i++)
    {
        vetorEsquerdo[i] = vetor[indicieEsquerdo + i];
    }

    //passa os elementos do vetor principal para o segundo vetor auxiliar(direito)
    for(j = 0; j < n2; j++)
    {
        vetorDireito[j] = vetor[meio + 1 + j];
    }

    //reseta as variaveisse faltarem alguns elementos do array esquerdo, passa eles para o array principal
    i =0;
    j= 0;
    k = indicieEsquerdo;

    while(i < n1 && j < n2)
    {


        //caso o valor da esquerda seja menor
        if(vetorEsquerdo[i] <= vetorDireito[j])
    {
        //passo para o meu vetor principal o valor menor
        vetor[k] = vetorEsquerdo[i];

        i++;
    }

    else
    {
      //passo para o meu vetor principal o valor menor
      vetor[k] = vetorDireito[j];

      j++;
    }

    //aumenta o indicie de posicionamento no vetor
    k++;
}

 //se faltarem alguns elementos do array esquerdo, passa eles para o array principal
 while( i < n1)
 {
     vetor[k] = vetorEsquerdo[i];
     i++;
     k++;
 }


 //se faltarem alguns elementos do array direito, passa eles para o array principal
while(j < n2)
{
    vetor[k] = vetorDireito[j];
    j++;
    k++;
}
}

void mergeSort (int vetor[TAM], int indicieEsquerdo, int indicieDireito)
{
    if(indicieEsquerdo < indicieDireito)
    {
        //encontra o meio
        int meio = indicieEsquerdo + (indicieDireito - indicieEsquerdo) / 2;

        //da metade para tras
        mergeSort(vetor, indicieEsquerdo, meio);

        //da metade para frente
        mergeSort(vetor, meio + 1, indicieDireito);

        //une os dois subarrays q foram criados
        merge(vetor, indicieEsquerdo, meio, indicieDireito);



    }
}
int main()
{
int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

imprimeVetor(vetor);
cout << endl;

mergeSort(vetor, 0, TAM - 1);
imprimeVetor(vetor);
}
