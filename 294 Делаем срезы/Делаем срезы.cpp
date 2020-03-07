#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    cout << s[2] << endl;
    cout << s[s.length()-2] << endl;
    cout << s.substr(0,5) << endl;
    cout << s.substr(0, s.length()-2) << endl;
    for(int i = 0; i < s.length(); i+=2)
        cout << s[i];
    cout << endl;
    for(int i = 1; i < s.length(); i+=2)
        cout << s[i];
    cout << endl;
    reverse(s.begin(), s.end());
    cout << s << endl;
    for(int i = 0; i < s.length(); i+=2)
        cout << s[i];
    cout << endl;
    cout << s.length() << endl;

}