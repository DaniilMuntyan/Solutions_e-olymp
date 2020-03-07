#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m,i,a,b,j;
    cin >> n >> m;
    int g[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            g[i][j] = 0;
    for(i=0;i<m;i++)
    {
        cin >> a >> b;
        g[a-1][b-1] = 1;
        g[b-1][a-1] = 1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(i!=j && !g[i][j])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}