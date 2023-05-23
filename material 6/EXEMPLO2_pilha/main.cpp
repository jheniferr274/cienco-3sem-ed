#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <string> roupas;

    //empty retorn se pilha cheia ou vazia

    if(roupas.empty())
    {
        cout << "Pilha vazia" << endl;
    }
    roupas.push("Calca azul");
    roupas.push("Calca preta");
    roupas.push("Camiseta branca");
    roupas.push("Camiseta amarela");
    roupas.push("Calca branca");
    roupas.push("Bermuda preta ");

    cout << "Tamanho da pilha: " << roupas.size() << endl;

    while(!roupas.empty())
    {
        cout << "Peca de roupa no topo: " << roupas.top() << endl;
        roupas.pop(); //retira elementos da pilha
    }

    cout << endl;
    cout << "Tamanho da pilha: " << roupas.size() << endl;

    return 0;


}
