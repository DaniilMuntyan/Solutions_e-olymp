#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long res = 3,a,b;
    a = 6;
    if(n == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    for(long long i = 2; i <= n;i++)
    {
        res+=a;
        a = (i+1)*3;

    }
    cout << res-n << endl;
}