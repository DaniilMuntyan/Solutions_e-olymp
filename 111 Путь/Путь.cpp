#include <bits/stdc++.h>
using namespace std;
int n, s, f,i,j,c;
vector <int> g[150];
vector <int> d(150);
queue <int> q;
void BFS(int s,int f)
{
    d[s]=1;
    q.push(s);
    while(!q.empty())
    {
        int k = q.front();
        q.pop();
        for(i=0;i<g[k].size();i++)
        {
            if(!d[g[k][i]])
            {
                q.push(g[k][i]);
                d[g[k][i]] = d[k]+1;
                if(g[k][i]==f)
                    return;
            }
        }
    }
}
int main()
{
    int a;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin >> a;
            if(a)
                g[i].push_back(j);

        }
    }
    cin >> s >> f;
    if(s > f) swap(s,f);
    BFS(s,f);
    if(d[f])
    cout << d[f]-1 << endl;
    else
        cout << -1 << endl;
}