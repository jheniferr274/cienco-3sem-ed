/*Escreva um programa em C++ que simule um sistema de atendimento em um banco.O programa deve permitir que o usu�rio realize as seguintes opera��es:
Abrir uma nova conta:
O programa deve solicitar ao usu�rio o nome do cliente e o saldo inicial da conta.
Em seguida, deve criar uma nova conta com os dados fornecidos e adicionar a conta a uma fila de espera para ser atendida por um atendente.
Atender o pr�ximo cliente:
O programa deve remover a pr�xima conta da fila de espera e exibir as informa��es do cliente que est� sendo atendido, incluindo o nome e o saldo atual da conta. Em seguida, o atendente deve solicitar ao cliente a opera��o que deseja realizar, que pode ser dep�sito, saque ou consulta de saldo.
Ap�s o cliente escolher a opera��o desejada, o programa deve solicitar o valor a ser depositado, sacado ou consultado e atualizar o saldo da conta correspondente.
Encerrar o programa:
O programa deve permitir ao usu�rio encerrar o programa.
Dica:
// Estrutura para representar uma conta banc�ria
struct Conta {
string cliente;
double saldo;
};
queue <Conta> filaEspera;*/

#include <iostream>
#include <queue>

using namespace std;

struct conta{;
    string cliente;
    double saldo;

};
int main()
{
    conta c;
    queue <string> fila;
    int opcao;
    string nome;


    do
    {
        cout << "Escolha a opcao: " << endl;
        cout << "1 - Abrir nova conta." << endl;
        cout << "2 - Atender o proximo cliente. " << endl;
        cout << "3 - Exibir fila de espera. " << endl;
        cout << "4 - Encerrar o programa. " << endl;
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Nome do cliente: ";
            cin >> c.cliente;
            cout << "Saldo inicial da conta: ";
            cin >> c.saldo;
            fila.push(c.cliente);
            break;

        case 2:
            cout << "Cliente sendo atendido. " << c.cliente.front() << endl;
            fila.pop();
            break;


        case 3:
            cout << "Programa encerrado.";
            break;
        }
    }
    while (opcao != 3);


    return 0;
}

