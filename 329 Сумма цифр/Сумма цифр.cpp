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
    long n,i,mi,p;
    cin >> n;
    vector<long> d(n);
    cin >> d[0];
    mi = d[0];
    p = f(d[0]);
    for(i=1;i<n;i++)
    {
        cin >> d[i];
        if(p >= f(d[i]))
        {
            p = f(d[i]);
            mi = d[i];
        }
    }
    cout << mi << endl;
}