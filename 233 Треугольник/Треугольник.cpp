#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+1][n+1];
    int d[n+1][n+1];
    for(int i = 1; i <= n;i++)
    {
        for(int j = 1 ; j <=i;j++)
        {
            cin >> a[i][j];
        }
    }
    d[1][1] = a[1][1];
    int sum1 = 0,sum2 = 0;
    for(int i = 1; i <= n;i++)
    {
        sum2 += a[i][i];
        sum1 += a[i][1];
        d[i][1] = sum1;
        d[i][i] = sum2;
    }
    for(int i = 2; i <= n; i++)
    {
        for(int j = 2; j < i; j++)
        {
            d[i][j] = max(d[i-1][j-1],d[i-1][j]) + a[i][j];
        }
    }
    int res = -1;
    for(int i = 1; i <= n;i++)
    {
        if(d[n][i] > res)
            res = d[n][i];
    }
    cout << res << endl;
}