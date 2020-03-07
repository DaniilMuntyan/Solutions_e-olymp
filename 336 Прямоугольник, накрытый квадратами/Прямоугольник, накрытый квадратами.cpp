#include <iostream>
using namespace std;
int gcd(int a, int b) {
 while (b) {
  a %= b;
  swap(a, b);
 }
 return a;
}
int main()
{
 int a, b;
 cin >> a >> b;
 int sol;
 sol = gcd(a,b);
 cout << sol << endl;
}