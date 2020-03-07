#include <bits/stdc++.h>
using namespace std;
int mM = 100000000;
int main()
{
    int n,m;
    cin >> n;

    vector <int> c(n+1);
    vector < pair <int,int> > g[n+1];
    vector <int> d(n+1,mM);
    set < pair<int,int> > q;
    int i,j,a,b;
    for(i=1;i<=n;i++)
        cin >> c[i];
    cin >> m;
    while(m--){
        cin >> a >> b;
        g[a].push_back({c[a],b});
        g[b].push_back({c[b],a});
    }
    int k = 1;
     d[k] = 0;
    q.insert({0, k});
    while(!q.empty()) {
        int k = q.begin() -> second;
        q.erase(q.begin());
        for(i = 0; i < g[k].size(); i++) {
            int to = g[k][i].second;
            int l = g[k][i].first;
            if(d[k] + l < d[to]) {
               d[to] = d[k] + l;
                q.insert({d[to], to});
            }
        }
    }
    if(d[n] < mM)
        cout  << d[n] << endl;
    else
        cout << -1 << endl;
}