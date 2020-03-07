#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int a[10000];
   int sum = 0;
   int i;
   double av;
   for(i = 0; i < n; i++)
   {
       cin >> a[i];
       sum += a[i];
   }
   int k = 0;
   av = sum / i;
   for(i = 0; i < n; i++)
   {
       if(a[i] > av)
       {
          k++;
       }
   }
   cout << k << endl;
    return 0;

}