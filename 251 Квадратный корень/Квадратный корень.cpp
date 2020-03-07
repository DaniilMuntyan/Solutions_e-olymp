#include <bits/stdc++.h>
using namespace std;
double f(double x)
{
  return x * x + sqrt(x);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    double c;
    cin >> c;
    double a = 0;
    double middle;
    double b = c;
    double y;
   while(b-a > 1e-10)
{
  middle = (a + b)/ 2;
  y = f(middle);
  if (y > c) b = middle; else a = middle;
  if(y == c)
    break;
}
    cout << setprecision(6) << fixed << a << endl;
}