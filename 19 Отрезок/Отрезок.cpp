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
    long long x1,x2,y1,y2,res;
    cin >> x1 >> y1 >> x2 >> y2;

    res = gcd(abs(x2 - x1), abs(y2 - y1)) + 1;
    cout << res << endl;
}