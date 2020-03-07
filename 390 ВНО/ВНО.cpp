#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    if(b==0)return a;
    return gcd(b, a%b);
}
int main(){
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    long long ans1, ans2;
    long long nok = abs(b*d)/gcd(b,d);
    ans1 = a*(nok/b)+c*(nok/d);
    ans2 = nok;
    long long g = abs(gcd(ans1,ans2));
    ans1/=g;
    ans2/=g;
    cout << ans1 << " " << ans2 << endl;
}