#include <bits/stdc++.h>
using namespace std;
int f(long a)
{
    long sum = 0;
    do
    {
        sum += a%10;
        a/=10;
    }while(a > 0);
    return sum;
}
int main()
{
    long n;
    cin >> n;
    long  i = 0,c=1,h=0;
    for(i=1;i<=n;i+=c)
    {
        c = f(i);
        h++;
    }
    cout << h << endl;
}