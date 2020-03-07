#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    string ans = "";
    string f = "";
    while(cin >> s){
        if(s == "0")
            break;
        ans = "";
        f = "";
        for(int i = 0; i < s.length(); i++){
            int c = 0;
            int j = i;
            while(s[j] == s[i]){
                c++;
                j++;
            }
            f += (c+'0');
            f += s[i];
            i = j-1;
        }
        for(int i = 0; i < f.length(); i++)
            cout << (f[i]-'0');
        cout << endl;
       // cout << f << endl;
    }
}