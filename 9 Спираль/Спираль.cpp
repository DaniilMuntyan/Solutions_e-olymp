#include <iostream>
using namespace std;
int main()
{
 int n, di, dj;
 int ie, je;
 
 cin >> n >> ie >> je;
 int arr[102][102], count = 0, k = 0;
 int i, j;
 di = 0;
 dj = 1;
 for (i = 0; i < n + 2; i++)
 {
  for (j = 0; j < n + 2; j++)
  {
   if ((i == 0) || (i == n + 1) || (j == 0) || (j == n + 1))
   {
     arr[i][j] = 1;
   }
   else
    arr[i][j] = 0;
  }
 }
 i = 1;
 j = 1;
 k = 0;
 for (int cou = 0; cou < n*n; cou++)
 {
  count = cou + 1;
  arr[i][j] = count;
  if (arr[i + di][j + dj] != 0)
  {
   k++;
   if (k == 1)
   {
    di = 1;
    dj = 0;
   }
   if (k == 2)
   {
    di = 0;
    dj = -1;
   }
   if (k == 3)
   {
    di = -1;
    dj = 0;
   }
   if (k == 4)
   {
    k = 0;
    di = 0;
    dj = 1;
   }

  }
  i += di;
  j += dj;
 }
 /*for (i = 1; i <= n ; i++)
 {
  for (j = 1; j <= n; j++)
   cout << arr[i][j] << " ";
  cout << endl;
 }*/
 cout << arr[ie][je] << endl;
}