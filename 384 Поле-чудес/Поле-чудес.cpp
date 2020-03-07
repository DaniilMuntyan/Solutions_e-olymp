#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    int i,ans=0;
    cin >> s;
    vector <bool> used(100000,false);
    for(i=0;i<s.length();i++)
    {
        if(!used[(int)s[i]]){
            ans++;
            used[(int)s[i]] = true;
        }
    }
    cout << ans << endl;
}