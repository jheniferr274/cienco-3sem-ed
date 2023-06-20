/*4. Faça um programa em C++ para ler 20 números e armazenar em um vetor
Após a leitura total dos 20 números, o algoritmo deve escrever esses 20
números lidos na ordem inversa*/

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int vetor[20];
    int inverso[20];

    srand(time(NULL));

    cout << "Vetor: --";

    for(int i =0; i < 20; i++)
    {
        vetor[i] = (rand() % 10);
        cout << " " << vetor[i];
    }

    cout << endl;

    cout << "Inverso: ";

    for(int i = 19; i >= 0; i--)
    {

        cout << " " << vetor[i];
    }


}
