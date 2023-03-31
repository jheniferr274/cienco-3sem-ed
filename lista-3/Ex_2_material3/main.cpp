/*Suponha que você está desenvolvendo um programa para armazenar
informações sobre animais em um zoológico. Crie uma estrutura chamada
Animal que deve armazenar as seguintes informações sobre cada animal:
• Nome do animal (string)
• Espécie do animal (string)
• Idade do animal (int)
• Peso do animal em kg (float)
Em seguida, crie um typedef para uma lista de animais chamada ListaAnimais,
que deve ser um vetor de 10 elementos do tipo Animal.
Por fim, crie um programa que pede ao usuário para digitar os dados de 10
animais e armazena esses dados em uma variável do tipo ListaAnimais.
Ao final, o programa deve exibir os dados de cada um dos 10 animais na tela. */

#include <iostream>
#include <cstdlib>
#define n 10

using namespace std;

typedef struct{

   string nome;
   string especie;
   int idade;
   int peso;

} animal;

int main(void)
{
     animal ListaAni[n];

     for(int i = 0; i < n; i++)
     {
         cout << "digite o nome do animal: ";
         getline(cin, ListaAni[i].nome);
         cout << "especie do animal: ";
         getline(cin, ListaAni[i].especie);
         cout << "idade: ";
         cin >> ListaAni[i].idade;
         cout << "peso: ";
         cin >> ListaAni[i].peso;
         system("cls");
         cin.ignore();
     }
     for(int i = 0; i < n; i++)
     {
         cout << "nome do animal: " << ListaAni[i].nome << endl;
          cout << "especie do animal: " << ListaAni[i].especie << endl;
           cout << "idade: " << ListaAni[i].idade << endl;
            cout << "peso: " << ListaAni[i].peso<< endl;
            cout << endl;
     }

     return 0;
}
