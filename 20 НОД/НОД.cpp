#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    if(a==0 || b == 0)
        return a+b;
    if(a > b)
        return gcd(a%b,b);
    else
        return gcd(a,b%a);
}
int main()
{
    long long n,i=0,ans;
    cin >> n;
    vector <long long> d(n);
    cin >> d[i];
    ans = d[i];
    for(i=1;i<n;i++)
    {
        cin >> d[i];
        ans = gcd(d[i],ans);
    }
    cout << ans << endl;
}