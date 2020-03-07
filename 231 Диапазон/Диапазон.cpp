#include <bits/stdc++.h>
#define qq cout << "!!" << endl;
#define ww cout << "??" << endl;
#define rr return 0;
#define nl cout << endl;
#define x first
#define y second
 
using namespace std;
 
int main() {
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    vector<pair<double, double> > A;
    double a, b;
    while(cin >> a >> b)
    {
        if(!(a || b))
        {
            double d = 0, r = 0;
            for(int i = 0; i < A.size(); i++)
            {
                if(i && A[i].y > A[i - 1].y) continue;
                if(i)
                {
                    d += A[i].x - A[i - 1].x;
                    r += A[i].y - A[i - 1].y;
                }
            }
            double rk = d / r;
            cout << fixed << setprecision(0)
                 << abs(rk * A.back().y) << endl;
            A.clear();
        }
        else if(a == -1 && b == -1)
        {
            return 0;
        }
        else
        {
            A.push_back(make_pair(a, b));
        }
    }
}