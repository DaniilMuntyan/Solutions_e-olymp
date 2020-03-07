#include <iostream>
using namespace std;
int main()
{
 int a, b, c;
 cin >> a >> b >> c;
 int sumAB, sumBC, sumAC;
 if (a == b && a == c)
  cout << a + b;
 else
 {
  sumAB = a + b;
  sumBC = b + c;
  sumAC = a + c;
  if (sumAB > sumBC && sumAB > sumAC)
   cout << sumAB;
  else
   if (sumBC > sumAB && sumBC > sumAC)
    cout << sumBC;
   else
    if (sumAC > sumAB && sumAC > sumBC)
     cout << sumAC;
 }
 cout << endl;
}