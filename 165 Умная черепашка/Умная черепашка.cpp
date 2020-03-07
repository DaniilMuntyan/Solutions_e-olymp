#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n;
    cin >> m >> n;
    if(m==0 || n ==0)
    {
        cout << 0 << endl;
        return 0;
    }
    if(m == 1 || n ==1)
    {
        cout << 1 << endl;
        return 0;
    }
    if(n==2 || m ==2)
    {
        if(n==2)
        {
            cout << m << endl;
            return 0;
        }
        if(m==2)
        {
            cout << n << endl;
            return 0;
        }
    }
    long long d[m+1][n+1];
    long long i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        d[i][j] = 0;
    for(i=0;i<=m;i++)
        d[i][0] = 1;
    for(j=0;j<=n;j++)
        d[0][j]=1;

    for(i=1;i<m;i++)
    {
        for(j=1;j<n;j++)
        {
            d[i][j] = d[i-1][j]+d[i][j-1];
        }
    }

    cout << d[m-1][n-1] << endl;
}