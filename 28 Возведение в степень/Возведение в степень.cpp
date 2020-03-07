#include <bits/stdc++.h>
using namespace std;
long long powmod(long long x, long long n, long long m)
{
  if (n == 0) return 1;
  if (n % 2 == 0) return powmod((x * x) % m, n / 2, m);
  return (x * powmod(x, n - 1, m)) % m;
}int main()
{
    long long a,b,m;
    cin >> a >> b >> m;
    cout << powmod(a,b,m) << endl;
}