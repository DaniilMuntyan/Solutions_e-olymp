#include <bits/stdc++.h>
#include <math.h>
#define M_PI 3.1415926535897932384626433832795
using namespace std;
int main()
{
    double r1,s;
    cin >> s >> r1;
    cout << fixed << setprecision(2) << sqrt((M_PI*r1*r1 - s)/(M_PI)) << endl;
}