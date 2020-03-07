#include <bits/stdc++.h>
using namespace std;
#define int long long
main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    map<char, int> m;
    char t;
    int i = 0;
    int ans = 5000001;
    while(cin >> t){
        if(m.count(t)>0){
            if(i-m[t] < ans)
                ans = i - m[t];
            m[t] = i;
        }
        m.insert({t, i});
        i++;
    }
    if(ans == 5000001)
        cout << 0 << endl;
    else
    cout << ans << endl;

}