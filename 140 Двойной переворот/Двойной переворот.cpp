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
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    --a, --b, --c, --d;
    vector <int> mas(n);
    for(int i = 0; i < n; i++)
        mas[i] = i+1;
    reverse(mas.begin() + a, mas.begin() + b + 1);
    reverse(mas.begin() + c, mas.begin() + d + 1);
    for(int i = 0; i < n; i++)
        cout << mas[i] << " ";
    cout << endl;
}