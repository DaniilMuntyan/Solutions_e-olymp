#include <string>
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
string max1(string a, string b)
{
if(a.length() >= b.length()) return a;
return b;
}
string max1(string a, string b, string c)
{
return max(a, max(b, c));
}
int main()
{
    string s;
    cin >> s;
    int L = s.length();
    string d[101][101];
    int i,j;
    string t = "!";
    for(i=0;i<L;i++)
        d[i][i] = s[i];
    i=1;
    for(i=1;i<L;i++)
    {
        for(j=i;j<L;j++)
        {
            int g = j-i;
            if(s[g]!=s[j])
            {
                d[g][j] = max1(d[g][j-1],d[g+1][j]);
            }else
            {
                d[g][j] = max1(d[g][j-1], max1(d[g+1][j], s[g] + d[g+1][j-1] + s[j]));
            }
        }
    }
cout << d[0][L-1] << endl;;

}