#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> d(3);
    int x,y,r = 1;
    cin >> d[0] >> d[1] >> d[2] >> x >> y;
    sort(d.begin(), d.end());
    if(x > y) swap(x,y);
    if(d[0] <= x && d[1] <= y) cout << "YES" << endl;
    else cout << "NO" << endl;

}