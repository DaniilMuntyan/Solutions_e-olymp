#include <bits/stdc++.h>
using namespace std;
#define int long long
bool check(vector <int> a, int m, int k){
    int c = 0;
    for(int i = 0; i < a.size(); i++)
        c += a[i]/m;
    return c >= k;
}
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k;
    cin >> n >> k;
    vector <int> a;
    int d;
    int sum = 0;
    while(n--){
        cin >> d;
        a.push_back(d);
        sum += d;
    }
    if(sum < k){
        cout << 0 << endl;
        return 0;
    }
    int MAX = *max_element(a.begin(), a.end());
    int l = 0, r = LONG_MAX;
    int m;
    while(l < r){
        m = (l+r)/2;
        if(check(a, m, k)) l = m+1;
        else r = m;
    }
    cout << l-1 <<  endl;

}