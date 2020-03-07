#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    if(a==0||b==0)
        return a+b;
    if(a>b)
        return gcd(a%b,b);
    else
        return gcd(a,b%a);
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long long a,b;
    cin >> a >> b;
    cout << gcd(a,b) << endl;
}