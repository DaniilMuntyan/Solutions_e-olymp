#include <bits/stdc++.h>
#include <string>
using namespace std;
vector <int> g[1001];
int k = 0;
vector <bool> used(1001,false);
void dfs(int v){
    used[v] = true;
    for(int i = 0; i < g[v].size();i++){
        if(!used[g[v][i]]){
            k++;
            dfs(g[v][i]);
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,a,b;
        cin >> n >> m;
        for(int i = 0; i < m;i++)
        {
            cin >> a >> b;
            g[a-1].push_back(b-1);
            g[b-1].push_back(a-1);
        }
        dfs(0);
        cout << k << endl;
        k = 0;
        for(int i = 0; i < n; i++)
            g[i].clear();
        used.assign(1001,false);
    }
}