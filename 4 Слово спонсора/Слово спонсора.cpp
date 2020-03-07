#include <bits/stdc++.h>
#define INF 0x3F3F3F3F
using namespace std;
int main()
{
    int sum=0,n,m,s,f,a,b,t,k;
    int mx=0;
    cin >> n >> m >> k;
    vector <int> prize(m), d(n,INF);
    vector < pair<int,int> > g[n];
    set < pair<int,int> > q;
    for(int i = 0; i < m;i++){
        cin >> prize[i];
        prize[i]--;
    }
    for(int i = 0; i < k; i++)
    {
        cin >> a >> b >> t;
        g[a-1].push_back({b-1,t});
        g[b-1].push_back({a-1,t});
    }
    cin >> s;
    s--;
    d[s] = 0;
    q.insert({s,0});
    while(!q.empty()){
        int v = q.begin() -> first;
        q.erase(q.begin());
        for(int i = 0; i < g[v].size();i++)
        {
            int to = g[v][i].first;
            int l = g[v][i].second;
            if(d[to] > l + d[v])
            {
                d[to] = l + d[v];
                q.insert({to,d[to]});
            }
        }
    }

    for(int i = 0; i < m; i++)
        if(d[prize[i]] >= mx)
            mx = d[prize[i]];
    if (mx == INF) printf("It is not fault of sponsor...\n");
    else printf("The good sponsor!\n%d\n",mx);
 /*   if(mx >= INF)
        cout << "It is not fault of sponsor..." << endl;
    else
        cout << "The good sponsor!" << endl << mx << endl;*/
}