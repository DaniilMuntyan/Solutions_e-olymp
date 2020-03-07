#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    vector <int> used(101,0);
    int n,i,j,a,c=0;
    cin >> n;
    vector <int> g[n];
    vector <int> color(n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> a;
            if(a)
            {
                g[i].push_back(j);
            }
        }
    }
    for(i=0;i<n;i++)
        cin >> color[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<g[i].size();j++)
            if(color[i] != color[g[i][j]] && used[g[i][j]]!=1){
                c++;
                used[g[i][j]] = 2;
            }
        used[i]  = 1;
    }
    cout << c << endl;

}