#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, N;
    cin >> n;
    N = n;
    int t, i = 0, v;
    vector <int> g[n];
    while(n--){
        cin >> t;
        while(t--){
            cin >> v;
            g[i].push_back(v);
        }
        i++;
    }
    n = N;
    int d[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) d[i][j] = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < g[i].size();j++){
            d[i][g[i][j]-1] = 1;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cout << d[i][j] << " ";
        cout << endl;
    }
}