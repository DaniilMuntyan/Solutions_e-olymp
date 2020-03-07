#include <iostream>
using namespace std;
int main()
{
 int n, arr[100][100], i = 0, j = 0, count = 1, k = 0;
 cin >> n;
 int c = 2;
 for (i = 0; i < n; i++)
 {
  for (j = 0; j < n; j++)
  {
   arr[i][j] = 0;
  }
 }
 arr[0][0] = 1;
 for (c = 1; c < 2 * n - 1; c++)
 {
  if (c % 2 == 0)
  {
   for (int i = c; i >= 0; i--)
   {
    
    j = c - i;
    if (i < n && j < n)
    {
     count++;
     arr[i][j] = count;
    }
   }
  }
  else
  {
   for (int i = 0; i <= c; i++)
   {
    
    j = c - i;
    if (i < n && j < n)
    {
     count++;
     arr[i][j] = count;

    }
   }
  }

 }

 for (i = 0; i < n; i++)
 {
  for (j = 0; j < n; j++)
  {
   cout << arr[i][j] << " ";
  }
  cout << endl;
 }
}