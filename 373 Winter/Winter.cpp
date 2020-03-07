#include <bits/stdc++.h>
using namespace std;
vector <int> G[100001];
vector <bool> used(100001,false);
int n, m;
void dfs(int v)
{
    used[v] = true;
    for(int p = 0; p < G[v].size();p++)
    {
        if(!used[G[v][p]])
        {
            dfs(G[v][p]);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int i,j,a,b;
    int k = 0;
    cin >> n >> m;
    if(m ==0)
    {
        cout << n << endl;
        return 0;
    }
    for(i = 0;i < m;i++)
    {
        cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }
    for(i=0;i<n;i++)
    {
        if(used[i] == false){
            dfs(i);
            k++;
        }
    }
    cout << k << endl;

}