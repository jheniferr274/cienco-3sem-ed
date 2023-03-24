#include <iostream>
#include <cstdlib>
#include <time.h>


using namespace std;

int main()
{
    int vetor[20];
    int inverso[20];

    srand(time(NULL));

    for( int i = 0; i < 20; i++)
    {
        vetor[i] = (rand() % 10);
        cout << " " << vetor[i];
    }

    cout << endl;

    cout << "Inverso: ";

    for(int i = 19; i < 0; i--)
    {
        cout << vetor[i] << " ";
    }
}
