#include <bits/stdc++.h>
using namespace std;
int n,m,a,b,d;
vector <int> g[51];
vector <bool> used(51,false);
int ans = 0;
void dfs(int v, int dist)
{
    if(dist > d)
        return;
    if(v == b)
        ans++;
    used[v] = true;
    for(int i = 0;i<g[v].size();i++)
    {
        if(!used[g[v][i]])
            dfs(g[v][i],dist+1);
    }

    used[v] = false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();

    cin >> n >> m >> a >> b >> d;
    int w,r;
    bool check = false;
    a--;
    b--;
    for(int i =0;i<m;i++)
    {
        cin >> w >> r;
        g[w-1].push_back(r-1);
    }
    dfs(a,0);
    cout << ans <<endl;


}