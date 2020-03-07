#include <bits/stdc++.h>
using namespace std;
long long st = 0;
long long Stairs(long long n, long long l)
{

    while(l<n)
    {
        l++;
        return (Stairs(n-l,l));
    }
}
int main()
{
    long long n;
    cin >> n;
    long long x=0,l=0;
    cout << Stairs(n,0) << endl;
}