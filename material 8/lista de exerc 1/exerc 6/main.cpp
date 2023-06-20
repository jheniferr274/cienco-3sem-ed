/*Escreva um programa em C++ que mostre o quadrado dos números inteiros
no intervalo de 1 a 20*/

#include <iostream>

using namespace std;

int main()
{
    int num = 20, quad;

    for (int i = 1; i <= num; i++)
    {
        quad= i * i;
       cout << "O quadrado do numero " << i << " eh " << quad << endl;
    }
}
