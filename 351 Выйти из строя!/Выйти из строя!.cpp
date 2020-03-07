#include <bits/stdc++.h>
using namespace std;
int MAX = 91;
vector <long long> m(MAX,-1);
int i, n;
long long f(int n)
{
  if (n == 1) return 1;
  if (n == 2) return 2;
  if (m[n] != -1) return m[n];
  return m[n] = f(n-1) + f(n-2) + 1;
}
 
int main()
{
  cin >> n;
  cout << f(n) << endl;
  return 0;
}