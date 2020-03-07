#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    stack<char> S;
    cin >> s;
    char t = ' ';
    for(register int i = 0; i < s.length(); i++){
        S.push(s[i]);
        if(t == '(' && s[i] == ')'){
            S.pop();
            S.pop();
            if(S.size() == 0)
                t = ' ';
            else
                t = S.top();
        }
        else
            t = s[i];

    }
    cout << S.size() << endl;
}