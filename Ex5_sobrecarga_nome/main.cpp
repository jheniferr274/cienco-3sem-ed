#include <iostream>
#include <locale.h>

using namespace std;

void mensagem(int n)
{
    cout << "numero: " << n << endl;
}

void mensagem()
{
    cout << "Exemplo de sobrecarga de função" << endl;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    mensagem();
    mensagem(10);

    return 0;
}
