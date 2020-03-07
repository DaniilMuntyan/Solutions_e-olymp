#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    int n, m;
    cin >> n >> m;
    int a, b;
    vector <int> g[n];
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        g[a-1].push_back(b-1);
        g[b-1].push_back(a-1);
    }
    for(int i = 0; i < n; i++)
        cout << g[i].size() << " ";
    return 0;
}