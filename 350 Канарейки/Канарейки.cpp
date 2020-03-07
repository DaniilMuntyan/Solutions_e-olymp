#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k;
    cin >> n >> k;
    int ans1 = (n + k - 1)/k;
    cout << ans1 << " " << (n-(k-1)) << endl;
}