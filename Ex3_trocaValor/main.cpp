#include <iostream>

using namespace std;

int main()
{
    int n1, n2, temp;

    cout << "entre com o numero 1: ";
    cin >> n1;

    cout << "entre com o numero 2: ";
    cin >> n2;

    cout << "Voce entrou com " << n1 << " e " << n2 << endl;

    /*troca a com b*/

    temp = n1;
    n1 = n2;
    n2 = temp;

    cout << "Trocados, ele sao " << n1 << " e " << n2 << endl;



}
