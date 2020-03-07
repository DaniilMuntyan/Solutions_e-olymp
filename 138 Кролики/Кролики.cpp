#include <iostream>
using namespace std;
int main()
{
    int rabbits = 1;
    int rabbitsToEat;
    int numberOfYears;
    cin >> numberOfYears >> rabbitsToEat;
    while(numberOfYears--)
    {
        if(rabbits > rabbitsToEat)
        {
            rabbits -= rabbitsToEat;
        }
        rabbits *= 2;
    }
    cout << rabbits << endl;
    return 0;
}