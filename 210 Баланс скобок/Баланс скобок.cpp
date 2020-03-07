#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    char s[150];
    bool f = false;
    gets(s);
    while(n--){
        gets(s);
        int c1=0, c2=0, c = 0;
        stack<char> d;
        char t = ' ';
        for(int i = 0; i < strlen(s); i++){
            d.push(s[i]);
            if((s[i] == ')'&& t == '(') || (s[i] == ']' && t == '['))
            {
                d.pop();
                d.pop();
                if(d.size() > 0)
                    t = d.top();
                else
                    t = ' ';
            }else{
                t = s[i];
            }
        }
        if(d.empty())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
   /* string s;
    cin >> s;
    cout << s << endl;*/
}