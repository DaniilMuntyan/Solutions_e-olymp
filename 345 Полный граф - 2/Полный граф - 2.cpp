#include <bits/stdc++.h>
using namespace std;
vector <int> d(1001);
vector <int> g[1001];
queue <int> q;
int n,j,i,a,x,y;
void BFS(int s, int f)
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
                d[g[k][i]] = d[k]+1;
                q.push(g[k][i]);
                if(g[k][i]==f)
                    return;
            }
        }
    }
}
int main()
{
    cin >> n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            cin>>a;
            if(a)
                g[i].push_back(j);

        }
    cin >> x >> y;
    BFS(x,y);
    cout << d[y] - 1 << endl;
}