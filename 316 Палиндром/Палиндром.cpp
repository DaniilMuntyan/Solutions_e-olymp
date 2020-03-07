#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
  /*  freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    map<char, int> a;
    string s;
    cin >> s;
    for(int i = 0; i < s.length();i++){
        if(a.count(s[i]) > 0)
            a[s[i]]++;
        else
        a.insert({s[i], 1});
    }
    string ans = "";

    for(auto &it:a){
        if((it).second >= 2){
            for(int i = 1; i <= (it).second/2; i++)
                ans += (it).first;
            (it).second &= 1;
        }
    }
    char t = ' ';
    for(auto &it : a){
        if((it).second == 1)
        {
            t = it.first;
            break;
        }
    }
    string ans1 = ans;
    reverse(ans1.begin(), ans1.end());
    if(t == ' ')
        cout << ans << ans1 << endl;
    else
    cout << ans << t << ans1 << endl;
}