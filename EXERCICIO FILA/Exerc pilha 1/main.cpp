/*1 Escreva um programa em C++ que implemente uma pilha e permita ao usuário realizar as seguintes operações
•Inserir um elemento na pilha
•Remover o elemento do topo da pilha
•Verificar o elemento do topo da pilha sem removê lo
•Verificar se a pilha está vazia
•Exibir o tamanho da pilha*/

#include <iostream>
#include <stack>
#define tamanho 5

using namespace std;

int main()
{
    stack <int> numero;
    int empilhar, remover, opcao;

    do
    {
        cout << "Escolha uma opcao: " << endl;
        cout << "1 - Inserir um elemento na pilha." << endl;
        cout << "2 - Remover o elemento do topo da pilha." << endl;
        cout << "3 - Verificar o elemento do topo da pilha sem removê lo. " << endl;
        cout << "4 - Verificar se a pilha está vazia." << endl;
        cout << "5 - Exibir o tamanho da pilha." << endl;
        cout << "0 - Sair" << endl;
        cout << "Opcao: " << endl;
        cin >> opcao;


        switch (opcao)
        {
        case 1:

            cout << "Insira um elemento: ";
            cin >> empilhar;
            numero.push(empilhar);
            cout << "Numero inserido." << endl;

            break;

        case 2:

            remover = numero.top();

            if (!numero.empty())
            {
                numero.pop();
                cout << "Numero removido." << endl;
            }
            else
            {
                cout << "Pilha esta vazia." << endl;
            }


            break;

        case 3:

            remover = numero.top();
            cout << "Numero no topo." << remover << endl;

            break;

        case 4:

            if (numero.empty())
            {
                cout << "Pilha vazia." << endl;
            }
        case 5:

            cout << "Tamanho da pilha: " << numero.size() << endl;

        }


    }
    while (opcao != 0);








}





















/*    continue;

}
}
    cout << endl;
}
while
*/
