#include <bits/stdc++.h>
using namespace std;
long maXX = -1;
long f(long n)
{
    if(maXX < n)
        maXX = n;
    if(n <= 1)
        return 1;
    if(n%2==1)
        return f(3*n + 1);
    else
        return f(n/2);
}
int main()
{
    vector <long> d(1);
    long n,a,b,c;
    cin >> n;
    d[1] = 1;
    d.assign(100001,-1);
    for(long i = 0; i < n; i++)
    {
        cin >> a;
        cin >> b;
        c = f(b);
        cout << a << " " <<  maXX << endl;
        maXX = -1;
    }


}