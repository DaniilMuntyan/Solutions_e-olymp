#include <iostream>
using namespace std;
int main()
{
  long long s, sum = 1, p = 1, n = 1;
  cin >> s;
  while (sum<s)
    {
        n++;
        p = p * 2 + n;
  sum += p;
  }
  cout << n << endl;
   return 0;
}