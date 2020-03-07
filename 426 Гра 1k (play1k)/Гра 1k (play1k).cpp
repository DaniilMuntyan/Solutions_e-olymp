#include <bits/stdc++.h>
using namespace std;
struct S {
    vector<int> vec;
};
bool rule(int a, int b) {
    return a > b;
}
int main() {
    ios_base::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, s;
    int ans = 0;
    int m;
    cin >> n >> s;
    int a[n+1];
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    sort(a + 1, a + n + 1, rule);
    int dp[n + 1][s + 1];
    S D[n + 1][s + 1];
    for(int i = 0; i <= n; ++i) {
        for(int j = 0; j <= s; ++j) {
            dp[i][j] = 0;
            D[i][j].vec.assign(n + 1, 0);
        }
    }
    for(int i = 1; i <= n; ++i) {
        int g = a[i];
        for(int j = 1; j <= s; ++j) {
            if(j - g >= 0) {
                m = max(dp[i][j - g] + g, max(dp[i - 1][j], dp[i - 1][j]));
                dp[i][j] = m;
                if(m == dp[i][j - g] + g) {
                    D[i][j].vec = D[i][j - g].vec;
                    ++D[i][j].vec[i];
                }
                else if(m == dp[i - 1][j])
                    D[i][j].vec = D[i - 1][j].vec;
                else
                    D[i][j].vec = D[i - 1][j].vec;
            }
            else {
                m = max(dp[i - 1][j], dp[i][j - 1]);
                dp[i][j] = m;
                if(m == dp[i - 1][j])
                    D[i][j].vec = D[i - 1][j].vec;
                else
                    D[i][j].vec = D[i - 1][j].vec;
            }
        }
    }
    if(dp[n][s] != s) {
        cout << 0 << endl;
        return 0;
    }
    for(int i = 1; i <= n; ++i)
        ans += D[n][s].vec[i];
    cout << ans << endl;;
}