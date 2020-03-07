#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,i,c=0;
    cin >> n;
    int g[n][n];
    for(i=0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {

            cin >> g[i][j];
            if(g[i][j]==1)
                c++;
        }
    }
    cout << c << endl;
}