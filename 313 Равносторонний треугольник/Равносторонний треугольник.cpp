#include <bits/stdc++.h>
#include <math.h>
#define M_PI 3.1415926535897932384626433832795
using namespace std;
int main()
{
    double a;
    cin >> a;
    double s,p;
    p = 3*a;
    s = (sqrt(3)/4)*a*a;
    cout << fixed << setprecision(4) << p << " " << s << endl;
}