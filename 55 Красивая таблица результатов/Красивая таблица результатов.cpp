#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int n, m;
    cin >> n >> m;
    int a[n];
    int i;
    int sq = sqrt(m);
    for(i = 1; i <=n;i++)
        cin >> a[i];
    int k = -1;
    int y, yi;
    int ki = -1;
    int sum = 0;
for(i = 1; i <= n; i++)
{
   while(m % (a[i]+1)==0)
   {
       a[i]++;
       sum++;
   }
}
    cout << sum << endl;
}