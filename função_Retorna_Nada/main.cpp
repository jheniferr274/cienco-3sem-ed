#include <iostream>
#include <locale.h>

using namespace std;

//prototipo da fun��o

bool par(int num);
void mensagem();

int main()
{
   setlocale(LC_ALL, "Portuguese");
   int n = 0;

   mensagem();

   cout << "Digite um numero: ";
   cin >> n;

   if(par(n))
   {
       cout << "O numero " << n << " � par" << endl;
   }
   else
   {
       cout << "O numero " << n << " � impar" << endl;
   }

   return 0;
}
   bool par(int num)
   {
       if (num % 2 == 0)
       {
           return true;
       }
       else
       {
           return false;
       }

   }
   void mensagem()
   {
       cout << "Aula do Modulo 2" << endl;
       cout << endl;
   }
