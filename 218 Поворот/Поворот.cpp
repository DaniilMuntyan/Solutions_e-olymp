#include <iostream>
using namespace std;
int main()
{
 int n, m, arr[50][50];
 cin >> n >> m;
 for (int i = 0; i < n; i++)
  for (int j = 0; j < m; j++)
   cin >> arr[i][j];
 cout << m << " " << n << endl;
 for (int i = 0; i < m; i++)
 {
  for (int j = n-1; j >= 0; j--)
   cout << arr[j][i] << " ";
  cout << endl;
 }
 cout << endl;

}