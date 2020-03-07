#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    if(b==0||a==0)
        return a+b;
    if(a > b)
        return gcd(a%b,b);
    else
        return gcd(a,b%a);
}
int main(){
    long long n,m;
    cin >> n >> m;
    cout << gcd(n,m);
}