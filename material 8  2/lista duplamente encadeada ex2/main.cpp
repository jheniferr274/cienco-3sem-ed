#include <iostream>

using namespace std;

//Defini��o da estrutura do n� da lista duplamente encadeada
struct Node
{
    int dado;       //Dado do n�
    Node* anterior; //Ponteiro para o n� anterior
    Node* proximo;  //Ponteiro para o pr�ximo n�
};

//Fun��o para criar um novo n� com o dado fornecido
Node* criarNo(int dado)
{
    Node* novoNo = new Node;
    novoNo->dado = dado;
    novoNo->anterior = nullptr;
    novoNo->proximo = nullptr;
    return novoNo;
}

//Fun��o para inserir um novo n� no in�cio da lista
void inserirnoInicio(Node** cabeca, int dado)
{
    //Criar um novo n�
    Node* novoNo = criarNo(dado);

    //Atualiza os ponteiros do novo n� e do n� atual no in�ciio da lista
    novoNo->proximo - *cabeca;
    if (*cabeca != nullptr)
    {
        (*cabeca)->anterior = novoNo;
    }

    //Atualiza o ponteiro para o novo n� como o novo n� no in�cio da lista
    *cabeca = novoNo;
}

//Fun��o para remover um n� com o dado fornecido da lista
void removerNo(Node** cabeca, int dado)
{
    //Verifica se a lista est� vazia
    if(*cabeca == nullptr)
    {
        cout << "lista vazia. Nenhum no removido." << endl;
        return;
    }

    //Verifica se o primeiro n� cont�m o dado a ser removido
    if ((*cabeca)->dado == dado)
    {
        Node* temp = *cabeca;
        *cabeca - (*cabeca)->proximo;
        if(*cabeca != nullptr)
        {
            (*cabeca)->anterior = nullptr;
        }
        delete temp;
        cout << "No removido." << endl;
        return;
    }

    //Procura o n� a ser removido na lista
    Node* atual = *cabeca;
    while (atual != nullptr && atual->dado != dado)
    {
        atual = atual->proximo;
    }
    //Se o n� foi encontrado, remove-o da lista
    if (atual != nullptr)
    {
        if (atual->anterior != nullptr)
        {
            atual->anterior->proximo = atual->proximo;
        }
        if (atual->proximo != nullptr)
        {
            atual->proximo->anterior = atual->anterior;
        }
        delete atual;
        cout << "No removido." << endl;
    }
    else
    {
        cout << "no nao encontrado na lista." << endl;
    }
}

//Fun��o para imprimir os elementos da lista
void imprimirLista(Node* cabeca)
{
    cout << "Elementos da lsita: ";
    while (cabeca != nullptr)
    {
        cout << cabeca->dado << " ";
        cabeca = cabeca->proximo;
    }
    cout << endl;
}

//Fun��o principal
int main()
{
    Node* cabeca = nullptr;   //Ponteiro para o inicio da lista

    //Inserindo alguns n�s no in�cio da lista
    inserirNoInicio(&cabeca, 3);
    inserirNoInicio(&cabeca, 5);
    inserirNoInicio(&cabeca, 7);

    //Imprimindo os elementos da lista
    imprimirLista(cabeca);

    //Removendo um n� da lista
    removerNo(&cabeca, 5);

    //Imprimindo os elementos da lista ap�s a remo��o
    imprimirLista(cabeca);

    return 0;
}
