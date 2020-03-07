#include <bits/stdc++.h>
using namespace std;
long long a[46];
int main()
{
    long long n;
    cin >> n;
    a[0] = 1;
    a[1] = 3;
    for(int i = 2; i < 46;i++)
    {
        a[i] = 3*a[i-1] - a[i-2];
    }
    cout << a[n] << endl;
}