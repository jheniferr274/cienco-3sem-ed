/*7 - Escreva um programa em C++ que escreva todos os números múltiplos de 5, no intervalo de 1 a 500.*/

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num = 500, multiplo;

    cout << "Os números múltiplos por 5 de 1 a 500 são: " << endl;

    for (int i = 1; i <= num; i++)
    {
        if (multiplo = i % 5 == 0)
            cout << i << endl;
    }
}
