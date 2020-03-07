#include <bits/stdc++.h>
using namespace std;
#define int long long
int getDec(string s){
    int ans = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'b')
            ans += pow(2,i)*1;
    }
    return ans;
}
vector<bool> getTwo(int dec){
    int n = dec;
    vector <bool> ans;
    if(dec == 0){
        ans.push_back(0);
        return ans;
    }
    while(n > 0){
        ans.push_back(n%2);
        n/=2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
main() {
    ios_base::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int ans = 1;
    while(n > 10){
        n-=9;
        ans *= 9;
    }
    if(n == 10)
        ans *= 16;
    else
        ans *= n;
    cout << ans << endl;
}