#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    cin >> s;
    int i,c=0;
    for(i=0;i<s.length();i++)
        if((s[i]-'0') == 5)
        c++;
    cout << c << endl;
}