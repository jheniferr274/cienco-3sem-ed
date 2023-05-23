#include <iostream>
#include <stack>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num;
    stack <int> numero;

    cout << "Digite uma sequencia de numeros inteiros positivos (digite 0 para finalizar): " << endl;
    do
    {
        cin >> num;
        numero.push(num);
    }

    while( num != 0);
    cout << endl;
    cout << "Números na ordem inversa: " << endl;


    do
    {
        cout << numero.top();
        numero.pop();
        cout << endl;
    }


    while( !numero.empty());

}
