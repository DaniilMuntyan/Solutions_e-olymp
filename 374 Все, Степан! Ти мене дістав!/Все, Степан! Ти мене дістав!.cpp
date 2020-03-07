#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
     while(true)
    {
        a%=b;
        if(a==0)
            return b;
        b%=a;
        if(b==0)
            return a;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long t1,t2;
    cin >> t1 >> t2;
    long long a,b;
    a = t1;
    b = t2;

    cout << (a*b)/gcd(a,b) << endl;

}