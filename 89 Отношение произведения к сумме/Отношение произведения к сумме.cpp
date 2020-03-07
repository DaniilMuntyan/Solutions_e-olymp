#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    long long i;
    double sum=0,p=1;
    for(i=0;i<s.length();i++)
    {
        sum+=s[i]-'0';
        p*=(s[i]-'0');
    }
    cout << setprecision(3) << fixed << p/sum << endl;
}