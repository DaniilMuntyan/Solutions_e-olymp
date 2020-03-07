#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin >> n >> m;
    int i,j;
    int a[n+1][m+1];
    int sum1 = 0, sum2 = 0;
    int d[n+1][m+1];
    for(i = 0 ; i < n;i++)
        for(j=0;j<m;j++)
            cin >> a[i][j];
     for(i = 0; i < n;i++)
     {
         sum1 += a[i][0];
         d[i][0] = sum1;
     }
     for(j=0;j<m;j++)
     {
         sum2 += a[0][j];
         d[0][j] = sum2;
     }
     i = 1;
     j = 1;
     for(i=1;i<n;i++)
     {
         for(j=1;j<m;j++)
         {
             d[i][j] = max(d[i-1][j],max(d[i][j-1],d[i-1][j-1])) + a[i][j];
         }
     }
     if(d[n-1][m-1] > 0)
     {
         cout << "winner" << endl;
         cout << d[n-1][m-1] << endl;
     }
     else
     {
          cout << "loser" << endl;
         cout << d[n-1][m-1] << endl;
     }


}