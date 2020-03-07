#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    long sum = 0;
    cin >> s;
    for(int i = 0; i < s.length();i++)
        sum+=(s[i]-'0');
    if(sum%3==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}