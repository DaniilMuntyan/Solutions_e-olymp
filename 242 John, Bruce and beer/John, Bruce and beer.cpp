#include <bits/stdc++.h>
using namespace std;
int main()
{
    long double a,b,c,sum;
    cin >> a >> b >> c;
     sum = a+b; 
     a/=c;
     b/=c;
     a+=b;
     cout <<setprecision(0) << fixed << a-0.499 << endl;
}