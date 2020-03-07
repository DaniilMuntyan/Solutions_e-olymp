#include <bits/stdc++.h>
using namespace std;
#define int long long
struct S{
    int a, b, c;
};
int stringToInt(string s){
    int ans = 0;
    for(int i = 0; i < s.length(); i++)
        ans += (s[i]-'0')*pow(10, s.length()-1-i);
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
    vector<int> a(13, 0);
    string s;
    for(int i = 0; i < n; i++){
        cin >> s;
        cin >> s;
        string g = "";
        int u = 0;
        for(int j = 0; j < s.length(); j++){
            if(s[j] == '/') u++;
            if(u == 1 && s[j] != '/')
                g += s[j];
            if(u == 2) break;
        }
        a[stringToInt(g)-1]++;
    }
    for(int i = 0; i < 12; i++)
        cout << i+1 << " " << a[i] << endl;

}