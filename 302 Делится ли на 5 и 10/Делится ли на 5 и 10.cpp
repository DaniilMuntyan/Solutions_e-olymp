#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    if((s[s.length()-1]-'0')%5 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    if((s[s.length()-1]-'0')%10 == 0)cout << "Yes" << endl;
    else cout << "No" << endl;
}