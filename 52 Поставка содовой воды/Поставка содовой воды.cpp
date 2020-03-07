#include <iostream>
using namespace std;
int main()
{
    int bottles, empty, cost, drinked = 0;
    cin >> bottles >> empty >> cost;
    bottles += empty;
    while(bottles >= cost)
    {
        drinked += bottles/cost;
        bottles = bottles/cost + bottles % cost;
    }

    cout << drinked << endl;
    return 0;
}