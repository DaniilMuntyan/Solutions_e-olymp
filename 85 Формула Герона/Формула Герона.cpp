#include <bits/stdc++.h>
#include <math.h>
#define M_PI 3.1415926535897932384626433832795
using namespace std;
int main()
{
    double a,b,c,d,f,p1,p2,s1,s2;
    cin >> a >> b >> c >> d >> f;
    p1 = (a+b+f)/2;
    p2 = (d+c+f)/2;
    s1 = sqrt(p1*(p1-a)*(p1-b)*(p1-f));
    s2 = sqrt(p2*(p2-d)*(p2-f)*(p2-c));
    cout << fixed << setprecision(4) << (s1+s2) << endl;
}