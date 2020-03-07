#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i =0;
    while(n - 500 >= 0)
    {
        i++;
        n = n - 500;
    }
    while(n-200 >= 0)
    {
        i++;
        n = n - 200;
    }
    while(n - 100 >= 0)
    {
        i++;
        n = n - 100;
    }
    while(n-50 >= 0)
    {
        i++;
        n = n - 50;
    }
    while(n-20 >= 0)
    {
        i++;
        n = n - 20;
    }
    while(n - 10 >= 0)
    {
        i++;
        n = n - 10;
    }
    if(n > 0)
        cout << -1 << endl;
    else
    cout << i << endl;


}