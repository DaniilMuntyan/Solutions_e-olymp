#include <bits/stdc++.h>
 
bool f(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
 
using namespace std;
 
int main() {
    string s, ans = "";
    char c;
    while(cin >> s) {
        vector<char>a;
        bool k = s[0] >= 'A' && s[0] <= 'Z';
        if (k)
        {
            s[0] = tolower(s[0]);
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (!f(s[i]))
            {
                ans+=s[i];
                continue;
            }
            a.push_back(s[i]);
            while(++i < s.size() && (f(s[i-1]) == f(s[i])))
            {
                a.push_back(s[i]);
            }
            i--;
            int j = i;
            sort(a.begin(), a.end());
            if (k) {
                a[0] += 'A' - 'a';
            }
            ans+=a[0];
            for (int i = 1; i < a.size(); i++)
            {
                if (a[i] != a[i-1] && a[i] != a[i-1] - 'A' + 'a')
                {
                    ans+=a[i];
                }
            }
            i = j;
            a.clear();
        }
    ans += " ";
    }
    cout << ans << endl;
    return 0;
}