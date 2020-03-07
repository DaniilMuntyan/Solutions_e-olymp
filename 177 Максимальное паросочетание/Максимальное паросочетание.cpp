#include <bits/stdc++.h>
using namespace std;
#define MAX 110
vector<vector<int> > g;
vector<int> used, mt;
int n,m,k;
int dfs(int v)
{
  if (used[v]) return 0;
  used[v] = 1;
  for (int i = 0; i < g[v].size(); i++)
  {
    int to = g[v][i];
    if (mt[to] == -1 || dfs(mt[to]))
    {
      mt[to] = v;
      return 1;
    }
  }
  return 0;
}
void func()
{
  int i, to;
  mt.assign (m+1, -1);
  for (i = 1; i <= n; i++)
  {
    used.assign(n+1, 0);
    dfs(i);
  }
}
int main()
{
    int a,b;
    cin >> n >> m >> k;
    g.resize(n+1);
    for(int i = 0; i < k; i++){
        cin >> a >> b;
        g[a].push_back(b);
    }
    func();
    int flow,i;
    for(flow = 0, i = 1; i <= m; i++)
        if(mt[i] != -1)  flow++;
    cout << flow << endl;
    for(i = 1; i<=m;i++)
        if(mt[i] != -1) cout << mt[i] << " " << i << endl;

}