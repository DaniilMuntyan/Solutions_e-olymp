#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x1,x2,y1,y2,x0,y0;
    cin >> x0 >> y0 >> x1 >> y1>> x2 >> y2;
    double k,b;
    k = (y2-y1)/(x2-x1);
    b = y1 - x1*k;
    if (((x0 - x1) * (y2 - y1) == (x2 - x1) * (y0 - y1)) &&
    ((x0 - x1) * (x2 - x1) >= 0)  && ((y0 - y1) * (y2 - y1) >= 0))
    cout << "YES" << endl;
    else
        cout << "NO" << endl;


}