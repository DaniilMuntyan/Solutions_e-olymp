#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int t,a;
    vector <bool> used(n, false);
    vector <int> g[n];
    queue<int> q;
    for(int i = 0; i < n; i++){
        cin >> t;
        for(int j = 0; j < t; j++)
        {
            cin >> a;
            g[i].push_back(a);
        }
    }
    q.push(0);
    int ans = 0;
    while(!q.empty()){
        int current = q.front();
        q.pop();
        if(used[current]) continue;
        used[current] = true;
        ans++;
        for(int i = 0; i < g[current].size(); i++){
            int current_lang = g[current][i];
            for(int j = 0; j < n; j++)
                if(binary_search(g[j].begin(), g[j].end(), current_lang))
                    q.push(j);
        }
    }
    cout << ans << endl;
}