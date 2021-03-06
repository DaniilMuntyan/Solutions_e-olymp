#include <bits/stdc++.h>
using namespace std;
int n, s, f,i,j,c;
vector <int> used(101);
vector <int> g[101];
vector <int> d(101);
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
    cin >> n >> s >> f;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin >> a;
            if(a)
                g[i].push_back(j);
        }
    }
    BFS(s,f);
    if(d[f])
    cout << d[f]-1 << endl;
    else
        cout << 0 << endl;
}