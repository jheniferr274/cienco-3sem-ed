/*Fa�a um programa em C++ que receba o n�mero de horas trabalhadas e o
valor do sal�rio m�nimo Calcule e mostre o sal�rio a receber seguindo as
regras abaixo
a.A hora trabalhada vale a metade do sal�rio m�nimo
b.O sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado
pelo valor da hora trabalhada
c.O imposto equivale a 3% do sal�rio bruto
d.O sal�rio a receber equivale ao sal�rio bruto menos o imposto*/

#include <iostream>

using namespace std;

int main()
{
    float numH, valorH, salMin, salBruto, imposto, salLiq;

    cout << "Digite o valor do salario: ";
    cin >> salMin;

    cout << "Fez quantas horas extras? " ;
    cin >> numH;

    valorH = salMin / 2;
    salBruto = numH * valorH;
    imposto = salBruto * 3/100;
    salLiq = salBruto - imposto;

    cout << "O salario a receber e: " << salLiq << endl;

    return 0;


}
