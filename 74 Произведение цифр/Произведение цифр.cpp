#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    cin >> s;
    int i,p=1;
    for(i=0;i<s.length();i++)
    {
        p*=(s[i]-'0');
    }
cout << p << endl;
}