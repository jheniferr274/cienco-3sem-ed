/*Construa um programa em C++ que calcule e apresente quanto deve ser
pago por um produto considerando a leitura do pre�o de etiqueta ( e o
c�digo da condi��o de pagamento ( Utilize para os c�lculos a tabela de
condi��es de pagamento a seguir*/


#include <iostream>

using namespace std;

int main()

{
    setlocale(LC_ALL,"Portuguese");

    float PE, CP;

    cout << "Entre com o pre�o de etiqueta: ";
    cin >> PE;

    cout << "Entre com o codigo do produto: ";
    cin >> CP;

    if (CP == 1)
    {
       PE = PE - PE * 10/100;
       cout << "A vista em dinheiro ou cheque: " << PE;
    }

    else if (CP == 2)
    {
        PE = PE - PE * 5/100;
        cout << "A vista com cartao de credito: "<< PE;
    }

    else if (CP == 3)
    {
        cout << "Preco normal sem juros: " << PE << endl;
        PE = PE /2;
        cout << "Valor de 2 parcelas de: " << PE;
    }

    else if (CP == 4)
    {
        PE = PE + PE * 10/100;
        cout << "Preco da etiqueta com acrescimo de 10%: " << PE << endl;
        PE = PE /3;
        cout << "Valor de 3 parcelas de: " << PE;
    }

    return 0;
}
