#include <iostream>
#include <cstdlib>
#include <time.h>
#define tam 4

using namespace std;

int main()
{
   int dia[tam], abaixo[tam], maior, posMaior,menor,  posMenor, contaBaixo = 0;
   float media, soma=0;
   srand(time(NULL));

   for(int i = 0; i < tam; i++)
   {
       dia[i] = (rand() % 10);
       cout << " dia " << i << " -->" << dia[i] << " : " << endl;
   }
   cout << endl;
   cout << " \n posicao e maior temperatura: ";
   maior = dia[0];
   posMaior = 0;
   for(int i = 0; i < tam; i++)
   {
       if(dia[i] > maior)
       {
           maior = dia[i];
           posMaior = i;
       }
   }

   cout << posMaior << "--->" << maior;
   cout << endl;

   cout << "\n posicao e menor temperatura: ";
   menor = dia[0];
   posMenor = 0;

   for(int i = 0; i < tam; i++)
   {
       if(dia[i] <  menor)
       {
           menor = dia[i];
           posMenor = i;
       }
   }
   cout << posMenor << "-->" << menor;
   cout << endl;


   for(int i = 0; i < tam; i++)
   {
       soma = soma + dia[i];
   }
   media = soma / tam;


   cout << "\nTemperatura media:" << media << endl;


   for(int i =0; i < tam; i++)
   {
       abaixo[contaBaixo] = i;
       contaBaixo++;
   }

   cout << "\nforam encontrados " << contaBaixo << " dias abaixo da media. foram eles os dias: ";


   for(int i = 0; i < contaBaixo; i++)
   {
       cout << abaixo[i] << " ";
   }
   cout << endl;


}
