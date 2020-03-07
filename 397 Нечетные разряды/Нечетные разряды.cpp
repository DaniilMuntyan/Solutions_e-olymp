#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int res = (s[0]-'0')*(s[2]-'0')*(s[4]-'0');
    if(s[0] == '-')
        res = (s[1]-'0')*(s[3]-'0')*(s[5]-'0');
    cout << res << endl;
}