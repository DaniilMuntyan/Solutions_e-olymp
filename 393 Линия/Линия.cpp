#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s,t;
    char a[n+1][n+1];
    long long d[n+1][n+1];
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin >> a[i][j];
            d[i][j]=0;
        }
    }
    cin >> t;
    d[1][1] = 1;
    for(i=0;i<=n;i++)
    {
        d[0][i]=0;
        d[i][0]=0;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i][j]==t[i+j-2])
            if(i==1&&j==1)
            continue;else
                d[i][j] = (d[i-1][j] + d[i][j-1])%1000003;



        }
    }
    cout << d[n][n]%1000003 << endl;
    return 0;
}