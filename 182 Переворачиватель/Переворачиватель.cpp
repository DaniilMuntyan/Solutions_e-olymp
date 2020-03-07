#include <bits/stdc++.h>
using namespace std;
#define int long long
main() {
    ios_base::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    reverse(a.begin(), a.end());
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
        cout << endl;
}