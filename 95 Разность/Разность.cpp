#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    cin >> s;
    int i,p=1,sum=0;
    if(s[0] == '-')
    for(i=1;i<s.length();i++)
    {
        p*=(s[i]-'0');
        sum+=(s[i]-'0');
    }
    else
    {
         for(i=0;i<s.length();i++)
    {
        p*=(s[i]-'0');
        sum+=(s[i]-'0');
    }
    }
    cout << p-sum << endl;
}