#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,h;
    cin >> a >> b>>h;
    double i;
    for(i=a;i<=b;i+=h)
    {
        cout << setprecision(3) << fixed <<i << " " << 3*sin(i) << endl;
    }

}