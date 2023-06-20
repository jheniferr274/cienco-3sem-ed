/*Construa um programa em C++ que calcule o novo sal�rio de um funcion�rio
Considere que o funcion�rio dever� receber um reajuste de 15% caso seu
sal�rio seja menor que 1000. Se o sal�rio for maior ou igual a 1000 mas
menor ou igual a 1500 o reajuste deve ser de 10%. Caso o sal�rio seja maior
que 1500 o reajuste deve ser de 5%.*/

#include <iostream>

using namespace std;

int main()
{
    float salario, reajuste;

    cout << "Entre com o valor do seu salario antigo: ";
    cin >> salario;

    if (salario < 1000)
    {
        reajuste = salario * 15/100;
        cout << salario + reajuste;
    }

    else if (salario >= 1000 && salario <= 1500)
    {
        reajuste = salario * 10/100;
        cout << salario + reajuste;
    }

    else
    {
        reajuste = salario * 5/100;
        cout << salario + reajuste;
    }

    return 0;
}
