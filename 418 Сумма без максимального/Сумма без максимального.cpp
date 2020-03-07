#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(),a.end());
    int sum = 0;
    for(int i = 0; i < n; i++)
        if(a[i] != a[n-1])
            sum += a[i];
    cout << sum << endl;

}