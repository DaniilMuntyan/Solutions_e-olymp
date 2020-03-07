#include <bits/stdc++.h>
using namespace std;
#define int long long
main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    int ans = 1;
    for(int i = s.length()-1; i >= 0; i--){
        ans += pow(2,s.length()-i-1)*(s[i]-'0');
    }
    cout << ans-1 << endl;
}