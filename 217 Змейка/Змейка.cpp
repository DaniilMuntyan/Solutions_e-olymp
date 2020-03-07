#include <iostream>
using namespace std;
int main()
{
 int n, m, x, y, arr[51][51], count = -1, k = 0;
 cin >> n >> m >> x >> y;
 for (int i = 0; i < n; i++)
 {
  if(i % 2 == 0)
  for (int j = 0; j < m; j++)
  {
   count++;
   arr[i][j] = count;
  }else
   for (int j = m-1; j >= 0; j--)
   {
    count++;
    arr[i][j] = count;
   }
 }
 
 cout << arr[x - 1][y - 1];
 cout << endl;
}