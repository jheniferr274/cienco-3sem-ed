/*Escreva um programa em C++ que permita a leitura dos nomes de 10
pessoas e armaze os nomes lidos em um vetor. Após isto, o algoritmo
deve permitir a leitura de mais 1 nome qualquer de pessoa e depois
escrever a mensagem ACHEI, se o nome estiver entre os 10 nomes lidos
anteriormente (guardados no vetor), ou NÃO ACHEI caso contrário.
*/

#include <iostream>
#include <string.h>


using namespace std;

int main()
{
   int indice;
   int total;
   bool achei = false;
   string palpite;
   string nota[nome];
   indice = 0;

   while (indice < nome)
   {
       cout << "entre com um nome: " << indice + 1 << " : " << endl;
       cin >> nota[indice];
       indice = indice + 1;
   }

   cout << "descubra o nome: ";
   cin >> palpite;

   for(int i = 0; i < 10; i++)
   {
       if(nota[i] == palpite)
       {
           achei = true;
       }
   }

   if (achei == true)
   {
       cout << "Achei!! ";
   }
   else
   {
       cout << "Nao achei!!";
   }
}
