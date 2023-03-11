#include <iostream>

using namespace std;

void altera(int & n1, int & n2)
{
    n1 = 100;
    n2 = 200;
}

int main()
{
    int n1 = 0, n2 = 0;

    cout << "Digite um numero : " << endl;
    cin >> n1;

    cout << "Digite um numero: " << endl;
    cin >>  n2;

    cout << "Primeiro numero: " << n1 << endl;
    cout << "Segundo numero: " << n2 << endl;

    altera(n1, n2);
    cout << "------------------------- " << endl;
    cout << "Primeiro numero alterado: " << n1 <<  endl;
    cout << "Segundo numero alterado: " << n2 << endl;

    return 0;
}
