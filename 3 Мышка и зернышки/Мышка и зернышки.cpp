#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n,m;
    cin >> n >>  m;
    long long i,j;
    vector <char> ans;
    long long sum1=0,sum2=0;
    long long a[n+1][m+1];
    long long g[n+1][m+1];
    long long d[n+2][m+2];
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
                cin >> a[i][j];
        }
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            g[n-i+1][j] = a[i][j];
    for(i=1;i<=n;i++)
    {
        sum1+=g[i][1];
        d[i][1] = sum1;
    }
    for(j=1;j<=m;j++)
    {
        sum2 += g[1][j];
        d[1][j] = sum2;
    }
    for(i=2;i<=n;i++){
        for(j=2;j<=m;j++){
            d[i][j] = max(d[i][j-1], d[i-1][j]) + g[i][j];

        }
    }
    /*cout << endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
     cout << endl;*/
     for(j=1;j<=m;j++)
        d[0][j] = -1;
     for(i=1;i<=n;i++)
        d[i][0] = -1;
    i = n;
    j = m;
    while(i>=1 && j >= 1)
    {
        if(i==1 && j == 1)
            break;
        if(d[i-1][j] > d[i][j-1])
        {
            ans.push_back('F');
            i--;
        }else
        {
            ans.push_back('R');
            j--;
        }
    }

    for(i=ans.size()-1;i>=0;i--)
        cout << ans[i];
        cout << endl;




}