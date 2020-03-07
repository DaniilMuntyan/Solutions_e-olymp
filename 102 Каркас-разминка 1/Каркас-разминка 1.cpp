#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> parent(102);
main()
{
    int n, q, w;
    cin >> n;
    int a;
    parent.resize(n+1);
    for(int i = 0; i < n; i++)
        cin >> parent[i];
    cin >> q >> w;
    int newV = parent[w-1];
    int k = parent[q-1];
    for(int i = 0; i < n; i++){
        if(parent[i] == k)
            parent[i] = newV;
    }
    for(int i = 0; i < n; i++)
        cout << parent[i] << " ";
}