#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    int n;
    cin >> n;
    vector <int> g[n];
    int a;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a;
            if(a && j > i)
                g[i].push_back(j+1);
        }
    }
    vector <int> d(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < g[i].size(); j++){
            cout << i+1 << " " << g[i][j] << endl;
        }
    }
}