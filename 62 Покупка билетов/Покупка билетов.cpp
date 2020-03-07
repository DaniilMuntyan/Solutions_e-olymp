#include <iostream>
#include <cmath>
using namespace std;
  long long D[5001];
  int a[5001];
  int b[5001];
  int c[5001];
  long long m(long long a, long long b)
  {
      if(a < b)
        return a;
      else
        return b;
  }
int main()
{
    int n;
    cin >> n;
    int i, j;

    for(i = 1; i <= n; i++)
    {
       cin >> a[i] >> b[i] >> c[i];

    }
    D[0] = 0;
    D[1] = a[1];
    D[2] = m(a[1] + a[2],b[1]);
    for(i = 3; i <= n; i++)
    {
        D[i] = m(m(D[i-1] + a[i], D[i-2] + b[i-1]), D[i-3] + c[i-2]);
    }
    cout << D[n] << endl;

}