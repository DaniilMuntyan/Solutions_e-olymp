#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long res=1, flag=0;
    long long n,k;
    cin >> n >> k;
for(; n > 0; n -= k)
{
  if (1e18 / n < res)
  {
    flag = 1;
    break;
 }
  res *= n;
}
if(flag)
    cout << "overflow" << endl;
else
    cout << res << endl;
}