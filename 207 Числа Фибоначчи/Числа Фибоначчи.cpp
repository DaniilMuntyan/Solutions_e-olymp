#include <cstdio>
#include <map>
#define MOD 100000000
using namespace std;
 
map<long long, long long> F;
 
long long gcd(long long a, long long b)
{
  return (!b) ? a : gcd(b,a % b);
}
 
long long fib(long long n)
{
  if (n == 0) return 0;
  if (n == 1) return 1;
  if (n == 2) return 1;
  if (F[n]) return F[n];
  long long k = n / 2;
  if (n % 2 == 1) // n=2*k+1
    return F[n] = (fib(k) * fib(k) + fib(k+1) * fib(k+1)) % MOD;
  else // n=2*k
return F[n] = (fib(k) * fib(k+1) + fib(k-1) * fib(k)) % MOD;
}
 
long long a, b, d;
 
int main(void)
{
  while(scanf("%lld %lld",&a,&b) == 2)
  {
    d = gcd(a,b);
    printf("%lld\n",fib(d));
  }
  return 0;
}