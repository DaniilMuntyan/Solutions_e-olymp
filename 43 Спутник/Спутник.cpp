#include <bits/stdc++.h>
using namespace std;
#define int long long
main() {
    ios_base::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string a, b;
    cin >> a >> b;
    string s = "", cur;
    int ans = 0;
    int i = 0, c = 0;
    while(true){
        c++;
        s += b[i];
        cur = a.substr(a.size()-i-1,a.size());
       // cout << "s = " << s << " cur = " << cur << endl;
        if(cur == s)
            ans = cur.size();
        if(i == min(a.size()-1, b.size()-1)) break;
        i++;
    }
    cout << ans << endl;
}