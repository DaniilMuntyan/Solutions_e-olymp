#include <iostream>
using namespace std;
int main()
{
 int n, arr[21][21];
 int i, j;
 cin >> n;
 for (i = 0; i < n; i++)
 {
  for (j = 0; j < n; j++)
  {
   if (i == n - j - 1)
    arr[i][j] = 0;
   else
   {
    if (i >= n - j - 1)
     arr[i][j] = 1;
    else
     arr[i][j] = 2;
   }
    
  }
 }
 for (i = 0; i < n; i++)
 {
  for (j = 0; j < n; j++)
  {
   cout << arr[i][j];
  }
  cout << endl;
 }
 
}