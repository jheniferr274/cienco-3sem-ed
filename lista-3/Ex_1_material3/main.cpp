/*Crie uma estrutura chamada pessoa que seja capaz de armazenar o nome, endereço, o cpf e a idade de 5 pessoas.
*/

#include <iostream>
#include <cstdlib>


using namespace std;

struct pessoa{;

    string nome;
    string endereco;
    int cpf;
    int idade;
};

int main(void)
{
    pessoa p[5];

       for(int i = 0; i < 5; i++)
   {

    cout << "qual seu nome?";
    getline(cin, p[i].nome);

    cout << "qual e o seu endereco?";
    cin >> (cin, p[i].endereco);

    cout << "qual e o seu cpf?";
    cin >> p[i].cpf;

    cout << "idade";
    cin >> p[i].idade;
    system("cls");

       cin.ignore();
   }



   for(int i = 0; i <= 5; i++)
   {
       cout << p[i].nome << endl;
       cout << p[i].endereco << endl;
       cout << p[i].cpf << endl;
       cout << p[i].idade << endl;

       cout <<  endl;
   }

   return 0;





}
