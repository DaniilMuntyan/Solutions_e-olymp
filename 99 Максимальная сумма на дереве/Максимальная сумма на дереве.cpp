#include <bits/stdc++.h>
using namespace std;
vector <int> g[(int)1e6];
vector <int> c(1e6);
long long sum = 0;
vector <int> dp1(1e6);
vector <int> dp2(1e6);
vector <bool> used(1e6);
inline void dfs(int v, int parent = -1){
    dp1[v] = c[v];
    dp2[v] = 0;
    for(int i = 0 ; i < g[v].size();i++){
        if(g[v][i] != parent){
            dfs(g[v][i],v);
            dp1[v] += dp2[g[v][i]];
            dp2[v] += max(dp1[g[v][i]],dp2[g[v][i]]);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a,b;
    used.assign(n+1,false);
    dp1.resize(n+1);
    dp2.resize(n+1);
    for(int i = 0; i < n-1; i++)
    {
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(int i = 0; i < n; i++)
        cin >> c[i];
    dfs(0);
    sum = max(dp1[0],dp2[0]);
    cout <<sum << endl;

}