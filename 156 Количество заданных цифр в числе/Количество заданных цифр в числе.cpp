#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    long a;
    cin >> a;
    long i,c=0;
    for(i=0;i<s.length();i++)
        if(s[i]-'0' == a)
        c++;
    cout << c << endl;
}