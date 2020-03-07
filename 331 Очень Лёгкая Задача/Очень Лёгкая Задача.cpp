#include <bits/stdc++.h>
using namespace std;
#define int long long

main()
{
   /* freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    int n, a, b;
    int ans = 0;
    cin >> n >> a >> b;
    ans = min(a,b);
    n--;
    int l = 0, r = n*max(a,b);
    int m = l+r; m/=2;
    while(l != r){
        m = l+r; m/=2;
        if((m/a) + (m/b) < n)
            l = m+1;
        else
            r = m;
    }
    cout << ans+l << endl;
}