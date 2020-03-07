#include <iostream>
using namespace std;
int main()
{
 int a, b, c, sl;
 cin >> a >> b >> c;
 if (c < a)
  swap(c,a);
 if (b > c)
  swap(b,c);
 if (a > b) swap(a,b);
 
 if ((c-a)*31 < (b-a)*47)
  sl = a;
 else
  sl = b;
 cout << sl << endl;
}