#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float PESO, ALTURA, IMC;

    cout << "Entre com seu peso: ";
    cin >> PESO;

    cout << "Entre com a sua altura: ";
    cin >> ALTURA;

    IMC = PESO/pow(ALTURA, 2);

    if (IMC < 20)
    {
        cout << "Abaixo do peso.";
    }
    else if (IMC < 25)
    {
        cout << "Peso ideal.";
    }
    else
    {
        cout << "Acima do peso.";
    }

    return 0;
}
