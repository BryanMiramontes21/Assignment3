#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int d1, d2, Numberofdice = 6+1;

    // put your code here to throw the dice for P1 and P2
    
    srand(time(NULL));

    d1 = rand() % Numberofdice;
    cout << "d1 : " << d1 << endl;
    d2 = rand() % Numberofdice;
    cout << "d2 : " << d2 << endl;
    // the following code makes comparison and determines the winner
    if (d1 > d2)
    {
        // put your code here for the case d1 is larger than d2
        cout << "d1 is the winner " << endl;
    }

    if (d1 < d2)
    {
        // put your code here for the case d1 is larger than d2
        cout << "d2 is the winner " << endl;
    }

    if (d1 == d2)
    {
        cout << "Both players tied " << endl;
    }

    return 0;
}