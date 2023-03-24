#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
   int vetorA[10];
   int x = 5;
   int vetorM[10];

   srand(time(NULL));

    cout <<"VetorA";

    for(int i = 0; i < 10; i++)
    {
        vetorA[i] = (rand() % 10);
        cout << " " << vetorA[i];
    }

    cout << endl;
    cout  << " X = 5";

    for(int i = 0; i < 10; i++)
    {
        vetorM[i] = vetorA[i] * 5;
    }
    cout << endl;
    cout << " VetorM: ";

    for(int i  = 0; i <= 10; i++)
    {
        cout << " " << vetorM[i];
    }
}
