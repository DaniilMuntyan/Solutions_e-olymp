#include <bits/stdc++.h>
using namespace std;
vector <int> g[(int)1e4];
vector <int> state(1e4);
int k;
int x,ans=-1;
    int m = 1e6;
inline void dfs(int v, int p = -1){

    state[v] = 0;
    for(int i = 0; i < g[v].size();i++){
        int to = g[v][i];
        if(to == p)
            continue;
        dfs(to,v);
        if(state[to] == 0){
            state[v] = 1;
            if(v == k)
                m = min(m,to);
        }

    }
}
int main()
{
    int n,a,b;
    cin >> n >> k;
    k--;
    state.resize(n);
    for(int i = 0; i < n-1; i++)
    {
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(k);
    if(state[k] == 0)
        cout << "First player loses" << endl;
    else
        cout << "First player wins flying to airport " << m+1 << endl;


}