#include <iostream>

using namespace std;

// Definição da estrutura do nó da lista encadeada
struct Node
{
    int dado;   //Dado do nó
    Node* proximo;    //Ponteiropara o proximo nó
};

//funçao para criar um novo nó com o dado fornecido
Node* criarNo(int dado)
{
    Node* novoNo = new Node;
    novoNo->dado = dado;
    novoNo->proximo = nullptr;
    return novoNo;
}

//Função para inserir um novo nó no início da lista
void inserirNoInicio(Node** cabeca, int dado)
{
    //Criar um novo nó
    Node* novoNo = criarNo(dado);

    //Define o próximo do novo nó como o nó atual no início da lista
    novoNo->proximo = *cabeca;

    //Atualiza o ponteiro para o novo nó como o novo nó no início da lista
    *cabeca = novoNo;
}

//Funçao para remover um nó com o dado fornecido da lista
void removerNo (Node** cabeca, int dado)
{
    //Verifica se a lista está vazia
    if(*cabeca == nullptr)
    {
        cout << "lista vazia. Nenhum no removido." << endl;
        return;
    }

    //Verifica se o primeiro nó contém o dado a ser removido
    if((*cabeca)->dado == dado)
    {
        Node* temp = *cabeca;
        *cabeca = (*cabeca)->proximo;
        delete temp;
        cout << "No removido." << endl;
        return;
    }

    //Procura o nó a ser removido na lista
    Node* anterior = *cabeca;
    Node* atual = (*cabeca)->proximo;
    while (atual != nullptr && atual->dado != dado)
    {
        anterior = atual;
        atual = atual->proximo;
    }

    //Se o nó foi encontrado, remove-o da lista
    if(atual != nullptr)
    {
        anterior->proximo = atual->proximo;
        delete atual;
        cout << "no removido." << endl;
    }
}

//Função para imprimir os elementos da lista
void imprimirLista (Node* cabeca)
{
    cout << "Elementos da lista: ";
    while (cabeca != nullptr)
    {
        cout << cabeca->dado << " ";
        cabeca = cabeca->proximo;
    }
    cout << endl;
}
 //Função principal
 int main()
{
   Node* cabeca = nullptr;   //Ponteiro para o primeiro nó da lista

   //Inserção de elementos na lista
   inserirNoInicio(&cabeca, 10);
   inserirNoInicio(&cabeca, 20);
   inserirNoInicio(&cabeca, 30);

   //Imprime os elemenstos da lista
   imprimirLista(cabeca);

   //Remove um nó da lista
   removerNo(&cabeca, 20);

   //Imprime os elementos atualizados da lista
   imprimirLista(cabeca);

   return 0;
}
