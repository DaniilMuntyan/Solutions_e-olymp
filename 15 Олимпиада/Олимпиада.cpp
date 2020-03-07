#include <bits/stdc++.h>
using namespace std;
struct S
{
    int h,m,s;
};
int main()
{
    vector <S> d(3);
    cin >> d[0].h >> d[0].m >> d[0].s >> d[1].h >> d[1].m >> d[1].s;
    int a1 = d[0].h*3600+d[0].m*60+d[0].s;
    int a2 = d[1].h*3600+d[1].m*60+d[1].s;
    int r = a2-a1;
    d[2].h = r/3600;
    r = r%
    3600;
    d[2].m = r / 60;
    d[2].s = r%60;
    cout << d[2].h << " " << d[2].m << " " << d[2].s << endl;
}