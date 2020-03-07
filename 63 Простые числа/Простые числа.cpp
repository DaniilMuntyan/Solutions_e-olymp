#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 int m, n, i = 0, j = 0, p = 0;
 bool flag = false, t = false;
 cin >> m >> n;
 for (i = m; i <= n; i++)
 {
  p = 0;
  for (p = 2, flag = true; p * p <= i && flag; p++)
  {
   if (i % p == 0) flag = false;
   else
    flag = true;
  }
  if (flag)
  {
   cout << i << endl;
   t = true;
  }
 }
 if (t == false)
  cout << "Absent" << endl;
 cout << endl;
 
}