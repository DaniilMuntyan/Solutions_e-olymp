#include<bits/stdc++.h>
using namespace std;
#define int long long
main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s = "";
    char t;
    cin >> s;
    int ans = 0;
    ans = s[0]-'0';
    for(int i = 1; i < s.length()-1; i++){
        if(s[i] == '+')
            ans += (s[i+1]-'0');
        if(s[i] == '*')
            ans *= (s[i+1]-'0');
    }
    cout << ans << endl;
}