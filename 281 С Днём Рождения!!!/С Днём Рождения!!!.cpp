#include <bits/stdc++.h>
using namespace std;
#define int long long
struct S{
    vector <int> x;
};
inline int middle(vector <int> a){
    sort(a.begin(), a.end());
    if(a.size() % 2 == 0)
        return a[a.size()/2 - 1];
    return a[a.size() / 2];
}
inline int len(vector <S> a, vector <int> b){
    int ans = 0;
    for(int i = 0; i < a.size(); ++i){
        vector <int> k = a[i].x;
        for(int j = 0; j < b.size(); j++)
            ans += abs(k[j] - b[j]);
    }
    return ans;
}
main() {
    ios_base::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, a;
    cin >> n >> a;
    vector <S> d(n);
    vector <int> c[n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < a; ++j){
            int curr;
            cin >> curr;
            d[i].x.push_back(curr);
            c[j].push_back(curr);
        }
    }
    vector <int> ans(a);
    cout << "(";
    for(int i = 0; i < a; ++i){
        ans[i] = middle(c[i]);
        if(i != a-1)
            cout << ans[i] << ",";
        else
            cout << ans[i] << ") ";
    }
    cout << len(d, ans) << endl;
}