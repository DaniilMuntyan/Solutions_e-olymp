#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin >> n;
    int i =0;
    while(n!=1)
    {
        if(n%2==0)
            n/=2;
        else
            n++;
            i++;
    }
    cout << i << endl;
}