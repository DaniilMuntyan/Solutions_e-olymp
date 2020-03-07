#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char t;
    cin >> n;
    int a[n+1][n+1];
    char h[n+1][n+1];
    for(int i = 1; i <=n;i++)
    {
        for(int j = 1; j <= n;j++)
        {
            cin >> t;
            a[i][j] = t-'0';
        }
    }
    int d[n+1][n+1];
    int sum1 = 0,sum2=0;
    for(int i = 1; i <= n;i++)
    {
        sum2 += a[1][i];
        sum1+=a[i][1];
        d[i][1] = sum1;
        d[1][i] = sum2;
    }
    for(int i = 2; i <= n; i++)
    {
        for(int j = 2; j <= n;j++)
        {
            d[i][j] = min(d[i-1][j],d[i][j-1]) + a[i][j];
        }
    }
   /* for(int i = 1; i <=n;i++)
    {
        for(int j = 1; j <=n;j++)
            cout << d[i][j] << " ";
        cout << endl;
    }*/
    int i = n;
    int j = n;
    while(true)
    {
        h[i][j] = '#';
        if(i == 1 && j == 1)
            break;
        if(i == 1){
            j--;
            continue;
        }
        if(j==1){
            i--;
            continue;
        }
        if(d[i-1][j] <= d[i][j-1])
            i--;
        else
            j--;
    }
    for(i = 1; i <= n;i++)
    {
        for(j = 1; j <=n;j++)
        {
            if(h[i][j] == '#')
            cout << h[i][j];
            else
                cout << '.';
        }
        cout << endl;

    }
}