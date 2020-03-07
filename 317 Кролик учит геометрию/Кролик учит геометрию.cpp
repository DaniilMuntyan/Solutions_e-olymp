#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    int n,m;
    cin >> n >> m;
    int a[n+1][m+1];
    int dp[n+1][m+1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            dp[i][j] = 0;
        }
    }
    int k = 0;

    for(int i = 0; i <= n; i++) dp[i][0] = 0;
    for(int j = 0; j <= m; j++) dp[0][j] = 0;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == 1)
                dp[i][j] = min(dp[i-1][j], min(dp[i-1][j-1],dp[i][j-1])) + 1;
            if(dp[i][j] > k) k = dp[i][j];
        }
    }
   /* cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cout << dp[i][j] << " ";
        cout << endl;
    }*/
    cout << k << endl;

}