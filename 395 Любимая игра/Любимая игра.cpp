#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
 int n;
 int a[1001], num[1001], flag, mas[1001], max = 0, maxi = 1;
 cin >> n;
 for (int i = 1; i <= n; i++)
  cin >> num[i] >> a[i];
 for (int i = 1; i <= n; i++)
 {
  for (int j = i+1; j <= n; j++)
  {
   if (num[i] == num[j])
    a[i] += a[j];
  }
 }
 for (int i = 1; i <= n; i++)
 {
  if (max < a[i])
  {
   maxi = num[i];
   max = a[i];
  }
 }
 cout << endl;
 cout << maxi << endl;
}