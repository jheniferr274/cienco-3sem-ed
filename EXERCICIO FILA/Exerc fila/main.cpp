// 1-Escreva um programa em C++ que simule um sistema de atendimento em uma loja O programa deve utilizar
//uma fila para gerenciar a ordem de atendimento dos clientes

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue <string> pessoas, filaAux;
    string nome;
    int opcao;

    do
    {
        cout << "Escolha a opcao: " << endl;
        cout << "1 - Inserir cliente." << endl;
        cout << "2 - Atender o proximo cliente. " << endl;
        cout << "3 - Exibir fila de espera. " << endl;
        cout << "4 - Encerrar o programa. " << endl;
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Nome do cliente: ";
            cin >> nome;
            pessoas.push(nome);
            break;

        case 2:
            cout << "Cliente sendo atendido. " << pessoas.front() << endl;
            pessoas.pop();
            break;

        case 3:
        if (!pessoas.empty()){
            filaAux = pessoas;
        }
        while (!filaAux.empty())
        {
            cout << filaAux.front();
            filaAux.pop();
        }

        case 4:
            cout << "Programa encerrado.";
            break;
        }
    }
    while (opcao != 4);


    return 0;
}
