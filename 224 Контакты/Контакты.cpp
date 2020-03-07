#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
 int n;
 cin >> n;
 int a[100001];
 int k = 0; 
 int i;
 for(i = 0; i < n; i++)
 cin >> a[i];
 sort(a,a+n);
 bool bl = false;
 cout << endl;
 int j = 0;
 int p =0;
 int h = 0;
 for(i = 0; i < n ; i++)
 {
  if((a[i] != a[i+1] && i != n-1) || i == n-1)
  {
   
   k++;
  }
 }
 cout << k << endl;
 
}