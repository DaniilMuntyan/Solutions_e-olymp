#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,z;
    cin >> x >> y >> z;
    cout << setprecision(2) << fixed << (double)(x+z-y)/2 << " " << (double)(x+y-z)/2 << " " << (double)(z+y-x)/2 << endl;
}