#include <iostream>
#include<string>
using namespace std;
int main()
{
    string p;
 char s;
 int a;
 cin >> p;
 for (int i = 0; i < p.length(); i++)
 {
  for (s = '0'; s <= p[i]; s++)
   cout << p[i];
 }
 cout << endl;

}