#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double d,a,b,f,o;
    double v,p;
    while(n--)
    {
        cin >> o >> d >> a >> b >> f;
        v = (a+b)/2;
        p = ((d/v)*f)/2;
        cout << o << " " <<  setprecision(2) << fixed <<  p << endl;
    }
}