#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, i, k;
 cin >> n;
 long long A[12];
 for (k = 0; k<n; k++)
 {
  for (i = 0; i<12; i++)
  {
   cin >> A[i];
  }
  sort(A, A + 12);
  int m = 3, j = 0;
  while (m<12 && A[j] == A[m])
  {
   j += 4;
   m += 4;
  }
  if (m<12) {
   cout << "no";
  }
  else
  {
   cout << "yes";
  }
  cout << endl;
 }
}