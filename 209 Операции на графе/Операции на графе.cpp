#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector <int> g[n];
    int t, a, b;
    while(k--){
        cin >> t;
        if(t == 1){
            cin >> a >> b;
            g[a-1].push_back(b);
            g[b-1].push_back(a);
        }else{
            cin >> a;
            if(g[a-1].size() != 0){
                for(int i = 0; i < g[a-1].size(); i++)
                    cout << g[a-1][i] << " ";
            }else
                cout << "";
            cout << endl;
        }
    }
}