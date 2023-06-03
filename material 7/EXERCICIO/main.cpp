#include <iostream>
#include <queue>

using namespace std;

int main()
{
   queue <string> cliente;
   int opçao;


   cout << "1- nome do cliente: ";
   cout << "2- inserir o proximo cliente: ";
   cout << "3- exibir a fila de espera: ";
   cout << "4- encerrar programa: ";
   cout << opcao;

   switch(opcao)
   {
       case '1'

   }

    //SIZE MOSTRA O TAMANHO DA FILA
    cout << "Tamanho da fila: " << pessoas.size() << endl;
    cout << "Primeira pessoa" << pessoas.front() << endl;
    cout << "Ultima pessoa" << pessoas.back() << endl << endl;

    while(cliente)
    {
        cout << "Primeira pessoa " << pessoas.front() << endl;
        pessoas.pop(); //retira elementos da pilha
    }

    return 0;
}
