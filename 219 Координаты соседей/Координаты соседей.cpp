#include <iostream>
using namespace std;
int main()
{
 int m, n, x, y, arr[506][506], count = 0, j = 0;
 cin >> m >> n >> x >> y;
 for (int i = 1; i <= m; i++)
  for (j = 1; j <= n; j++)
  {
   count++;
   arr[i][j] = count;
  }
 
 if (x + 1 <= m && x - 1 >= 1 && y - 1 >= 1 && y + 1 <= n)
  cout << x + 1 << y << x - 1 << y << x << y + 1 <<  x << y - 1 << endl;

 
}