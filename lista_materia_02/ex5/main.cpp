#include <iostream>
#include <time.h>
#include <cstdlib>


using namespace std;

int main()
{
    int valorN = 0;

    srand(time(NULL));

    cout << "Entre com o valor N: ";
    cin >> valorN;

    int vetorA[valorN];
    int vetorB[valorN];
    int vetorSoma[valorN];

    for(int i = 0; i < valorN; i++)
    {
        vetorA[i] = (rand() % valorN);
        vetorB[i] = (rand() % valorN);
        vetorSoma[i] = vetorA[i] + vetorB[i];

        for(int i = 0; i < valorN; i++)
        {
            cout << " " << i << " --> " << vetorA[i] << " + " << vetorSoma[i] << endl;
        }
    }
}
