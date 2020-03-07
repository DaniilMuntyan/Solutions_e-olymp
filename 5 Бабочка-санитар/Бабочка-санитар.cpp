#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x1,x2,y1,y2,z1=0,z2;
    cin >> x1 >> y1 >> x2 >> y2 >> z2;
    cout << fixed << setprecision(3) << (1/sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) + (z2 - z1)*(z2-z1))) << endl;

}