#include <bits/stdc++.h>
using namespace std;
main(){
    double a,b,c,x,y;
    cin >> x >> y >> a >> b >> c;
    cout << fixed << setprecision(6) << abs(a*x+b*y+c)/sqrt(a*a+b*b) << endl;
}