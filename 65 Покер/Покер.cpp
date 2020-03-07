#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
 int  i = 0, a[6], b[6], c[6], k = 0, t = 0, r = 0, g = 0, tr = 0, max = 0, min = 0;
 bool four = false, full = false, three = false, two = false, one = false, str = false, rasl = false;
 for (i = 1; i <= 5; i++)
 {
  cin >> a[i];
  b[i] = 0;
 }
 
 sort(a,a+5);
 for (i = 1; i <= 5; i++)
 {
  for (int j = i+1; j <= 5; j++)
   if (a[i] == a[j])
    b[i]++;
  k += b[i];
 }
 max = a[1];
 min = a[1];
 for (i = 1; i <= 5; i++)
 {
  for (int j = i+1; j <= 5; j++)
  {
   if (a[i] != a[j])
    rasl = true;
   else
   {
    rasl = false;
    i = 5;
    break;
   }
  }
 }
 for (i = 1; i <= 5; i++)
 {
  if (a[i] > max)
   max = a[i];
  else
   if (a[i] < min)
    min = a[i];
 }
 
  if (k == 10)
   cout << "Impossible" << endl;
  else
   if (k == 6)
    cout << "Four of a Kind" << endl;
   else
    if (k == 4)
     cout << "Full House" << endl;
    else
     if (max - min == 4 && rasl == true)
      cout << "Straight" << endl;
     else
     if (k == 3)
      cout << "Three of a Kind" << endl;
     else
      if (k == 2)
       cout << "Two Pairs" << endl;
      else
       if (k == 1)
        cout << "One Pair" << endl;
       else
        cout << "Nothing" << endl;
 
}