/*2 Escreva um programa em C++ que leia uma sequência de números inteiros positivos do
usuário e imprima os na ordem inversa utilizando uma pilha*/

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <int> numero;
    int valor;
    cout << "Entre com um valor: " << endl;
    do
    {


        cin >> valor;
        if(valor != 0)
        {
          numero.push(valor);
        }

    }

    while (valor != 0);
    {
        cout << "Numero na ordem inversa: " << endl;

        while(!numero.empty())
        {
            cout << numero.top();
            numero.pop();
            cout << endl;
        }


    }
}
