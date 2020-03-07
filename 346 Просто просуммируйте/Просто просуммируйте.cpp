#include <bits/stdc++.h>
using namespace std;
unsigned long long powmod(unsigned long long  x, unsigned long long  n)
{
    unsigned long long m = 10000007;
  if (n == 0) return 1;
  if (n % 2 == 0)
    return powmod((x * x) % m, n / 2);
  return (x * powmod(x, n - 1)) % m;
}
int main()
{
    unsigned long long a,b,n,k;
    unsigned long long  ans;
    while(cin >> a >> b)
    {
        if(a == 0 && b == 0)
            return 0;
        n = a;
        k = b;
        ans = powmod(n,k)%10000007 + powmod(n,n)%10000007 + 2*(powmod(n-1,n-1))%10000007 + 2*(powmod(n-1,k))%10000007;
        cout << ans%10000007 << endl;
    }
}