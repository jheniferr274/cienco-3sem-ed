/*Faça um programa em C++ que receba o número de horas trabalhadas e o
valor do salário mínimo Calcule e mostre o salário a receber seguindo as
regras abaixo
a.A hora trabalhada vale a metade do salário mínimo
b.O salário bruto equivale ao número de horas trabalhadas multiplicado
pelo valor da hora trabalhada
c.O imposto equivale a 3% do salário bruto
d.O salário a receber equivale ao salário bruto menos o imposto*/

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
