#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char** argv)
{
    /*
    empty = vazio
    size = tamanho
    front =
    back =
    push =
    pop =
    */

    queue <string> pessoas;

    pessoas.push("RODRIGO"); //push adiciona elementos na fila
    pessoas.push("ANDRE");
    pessoas.push("MARIA");
    pessoas.push("ANA");
    pessoas.push("JOSE");
    pessoas.push("RITA");

    //SIZE MOSTRA O TAMANHO DA FILA
    cout << "Tamanho da fila: " << pessoas.size() << endl;
    cout << "Primeira pessoa" << pessoas.front() << endl;
    cout << "Ultima pessoa" << pessoas.back() << endl << endl;

    while(!pessoas.empty())
    {
        cout << "Primeira pessoa " << pessoas.front() << endl;
        pessoas.pop(); //retira elementos da pilha
    }

    return 0;
}
