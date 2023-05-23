#include <iostream>
#include <stack>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    stack <int> opcao;
    int elemento, remov,opc;

    do
    {
        cout << "ESCOLHA UMA OPÇÃO: " << endl;
        cout << "1. Inserir elemento." << endl;
        cout << "2. Remover elemento do topo." << endl;
        cout << "3. Verificar elemento do topo." << endl;
        cout << "4. Verificar se a pilha esta vazia." << endl;
        cout << "5. Exibir tamanho da pilha." << endl;
        cout << "0. Sair." << endl;
        cout << "Opção: " ;
        cin >> opc;

        switch(opc)
        {
        case 1:
            cout << "Insira o valor: ";
            cin >> elemento;
            opcao.push(elemento);
            cout << "O elemento inserido foi " << elemento << endl;
            cout << endl;
            break;

        case 2:
            remov = opcao.top();
            if (!opcao.empty())
            {
                opcao.pop();
                cout << "O elemento removido foi " << remov << endl;
                cout << endl;
            }
            else
            {
                cout << "Pilha vazia." ;
            }
             break;

        case 3:
            remov = opcao.top();
            cout << "O elemento no topo é " << remov << endl;
            cout << endl;
            break;

        case 4:

            if ( !opcao.empty())
            {
                cout << "A pilha esta cheia." << endl;
            }
            else
            {
                cout << "A pilha nao esta cheia." << endl;
            }
            cout << endl;
            break;

        case 5:

             cout << "Tamanho da Pilha: " << opcao.size() << endl;
             cout << endl;
        }
    }
    while( opc != 0);
}
