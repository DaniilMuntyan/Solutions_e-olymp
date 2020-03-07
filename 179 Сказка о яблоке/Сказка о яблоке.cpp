#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    unsigned long long i = 2, c = 1;
    while(n--)
    {
        i=2*(c+1);
        c = i;
    }
    cout << i << endl;
}