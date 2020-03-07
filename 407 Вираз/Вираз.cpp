#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
long long invertToNumber(string a)
{
    long long res = 0,h=1;
    for(int i = a.length()-1; i >=0; i--)
    {
        res += (a[i] - '0') * h;
        h*=10;
    }
    return res;
}
string invertToString(long long a)
{
    string ans = "";
    vector <char> c;
    int k = 0;
    while(a > 0)
    {
        c.push_back(a%10 + '0');
        a/=10;
        k++;
    }
    reverse(c.begin(),c.end());
    for(int i = 0; i < c.size();i++)
        ans+=c[i];
    return ans;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string t;
    vector <string> h;
    vector <long> a;
    vector <long long> d;
    while(cin >> t)
    {
        h.push_back(t);
        if(isdigit(t[0]))
            a.push_back(invertToNumber(t));
        else{
            if(t == "+")
                d.push_back(invertToNumber(h[h.size()-2])+invertToNumber(h[h.size()-3]));
            else
                d.push_back(invertToNumber(h[h.size()-2])*invertToNumber(h[h.size()-3]));
        h.erase(h.begin() + h.size()-3, h.begin() + h.size());
        h.push_back(invertToString(d[d.size()-1]));
        }
    }
    cout << d[d.size()-1] << endl;
}