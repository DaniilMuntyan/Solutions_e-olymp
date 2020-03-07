#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> g[101];
vector <bool> used(101, false);
int k = 1;
void dfs(int v){
    used[v] = true;
    //cout << v << " " << k <<  endl;
    for(int i = 0; i < g[v].size();i++)
    {
        if(!used[g[v][i]]){
            k++;
            dfs(g[v][i]);
        }
    }
}
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, s;
    int a;
    cin >> n >> s;
    --s;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a;
            if(a == 1){
                g[i].push_back(j);
                g[j].push_back(i);
            }
        }
    }
    dfs(s);
    cout << k << endl;
}