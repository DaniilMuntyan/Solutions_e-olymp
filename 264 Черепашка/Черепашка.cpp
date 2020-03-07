#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    int ans = 0;
    int i,j;
    int sum1 = 0,sum2 = 0;
    cin >> n >> m;
    int a[n+1][m+1];
    int d[n+1][m+1];
  /*  for(i=0;i<=n;i++)
    {
        a[i][0] = 0;
        a[0][i] = 0;
    }*/
    for(i=1;i<=n;i++)
    {
        for(j=1;j <= m;j++)
        {
            cin >> a[i][j];
        }
    }
    for(i=1;i<=n;i++)
    {
        sum1+=a[i][1];
        d[i][1] = sum1;
    }
    for(j=1;j<=m;j++)
    {
        sum2 += a[1][j];
        d[1][j] = sum2;
    }
    ans = d[1][1];
    for(i=2;i<=n;i++)
        for(j=2;j<=m;j++)
            d[i][j] = min(d[i-1][j],d[i][j-1]) + a[i][j];
    cout << d[n][m] << endl;

}