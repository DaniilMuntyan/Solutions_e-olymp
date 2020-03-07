#include <bits/stdc++.h>
using namespace std;
const long long m = 1000000000;
int main()
{
    int n,s,f;
    cin >> n >> s >> f;
    vector < pair<int,int> > g[n+1];
    vector <int> d(n+1,m);
    set < pair <int,int> > q;
    s--;
    f--;
    int i,j,a;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> a;
            if(a!=-1 && a)
                g[i].push_back({a,j});

        }
    }
    d[s] = 0;
    q.insert({0,s});
    while(!q.empty())
    {
        int v = q.begin() -> second;
        q.erase(q.begin());
        for(i=0;i<g[v].size();i++)
        {
            int to = g[v][i].second;
            int l = g[v][i].first;
            if(d[v] + l < d[to])
            {
                d[to] = d[v] + l;
                q.insert({d[to],to});
            }
        }
    }

    if(d[f] < m)
        cout << d[f] << endl;
    else
        cout << -1 << endl;
}