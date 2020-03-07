#include <iostream>
using namespace std;
int main()
{
 bool flag = false;
 unsigned n;
 cin >> n;
 unsigned d = 2, j;
 while (d*d <= n)
 {
  if (n % d == 0)
  {
   flag = true;
   n = n / d;
   cout << d << "*";
   
  }
  else
   d++;
 }
 if (d*d > n)
  cout << n;
 cout << endl;
}