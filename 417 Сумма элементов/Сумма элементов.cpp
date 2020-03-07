#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    double a, sum;
    while(n--){
        cin >> a;
        sum += a;
    }
    cout << sum << endl;
}