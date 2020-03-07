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
    vector <int> a, b;
    int c;
    for(int i = 0; i < n; i++){
        cin >> c;
        if(c%2==0)
            a.push_back(c);
        else
            b.push_back(c);
    }
    sort(a.rbegin(), a.rend());
    sort(b.begin(), b.end());
    for(int i = 0; i < b.size(); i++)
        cout << b[i] << " ";
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
}