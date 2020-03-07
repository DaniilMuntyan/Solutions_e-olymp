#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k, t;
    cin >> n >> k;
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    while(k--){
        cin >> t;
        int l = 0, r = a.size()-1;
        int m;
        while(l < r){
            m = (l+r)/2;
            if(t < a[m]) r = m;
            else l = m + 1;
        }
        if(a[l] != t && a[l-1] != t){
            cout << 0 << endl;
            continue;
        }
        if(a[l] != t) l--;
        cout << l+1 << endl;
    }
}