#include <bits/stdc++.h>
using namespace std;
#define int long long
bool check(vector <int> a, int m, int k){
    int n = a.size();
    int i, g = 1, j = 0;
    for(i = 1; i < n; i++)
        if(a[i] - a[j] >= m) g++, j = i;
    return g >= k;
}
main()
{
   /* freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r = INT_MAX;
    int m;
    while(l < r){
        m = (l+r)/2;
        if(check(a, m, k)) l = m+1;
        else r = m;
    }
    cout << l-1 << endl;
}