/*6.Fa�a um programa em C++ para ler e armazenar em um vetor a temperatura
m�dia de todos os dias do ano(semana). Calcular e escrever:
a) Menor temperatura do ano
b) Maior temperatura do ano
c) Temperatura m�dia anual
d) O n�mero de dias no ano em que a temperatura foi inferior a m�dia
anual*/

#include <iostream>

using namespace std;

int main()
{
    float temperatura[7], maior, menor;
    float soma, media;


    for(int i = 0; i < 7; i++)
    {
        cout << "Valor da temperatura da semana: ";
        cin >> temperatura[i];
    }
    menor = temperatura[0];

    for(int i = 0; i < 7; i++)
    {
        if (temperatura[i] < menor)
        {
            menor = temperatura[i] ;
        }
    }

    cout << "\nMenor temperatura: " << menor<< endl;

    maior = temperatura[0];

    for(int i = 0; i < 7; i++)
    {
        if (temperatura[i] > maior)
        {
            maior = temperatura[i] ;

            media = media + temperatura[i];
        }
    }
    cout << "Maior temperatura: " << maior << endl;
    cout << "Temperatura media: " << media/7;





}
