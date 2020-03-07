#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if(n==0)
    {
        cout << 0 << endl;
        exit(0);
    }
    long long a[n+1];
    long long i,j;
    long long d[n+1];
    d[0]=0;
    for(i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n+1);
    d[0] = a[0];
    d[1] = a[0] + a[1];

    if(n >= 2)
    {
    d[2] = a[2]+a[1];
    for(i=3;i<n;i++)
    {
        d[i] = min(d[i-3] + a[i] + a[i-1],d[i-4] + a[i]+a[i-1]+a[i-2]);
    }
    }
    cout << d[n-1] << endl;

}