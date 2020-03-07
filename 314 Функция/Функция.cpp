#include <bits/stdc++.h>
#define qq cout << "!!" << endl;
#define ww cout << "??" << endl;
#define rr return 0;
#define nl cout << endl;
#define M_E 2.71828182845904523536

using namespace std;

int main() {
   /* freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    double x;
    while(cin >> x) {
        double ans = sin(x) + (int)(3 * (pow(M_E, x)));
        double sq = log((3 * x)) / log(4);
        ans += sqrt(sq);
        cout << fixed << setprecision(6)
            << ans+1 << endl;
    }
}