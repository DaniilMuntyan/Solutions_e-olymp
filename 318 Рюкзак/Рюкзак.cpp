#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int s;
    cin >> s;
    int a;
    vector <int> w;
    while(cin >> a)
        w.push_back(a);

    int n = w.size();
  //  cout << n << endl;
    /*for(int i = 0; i < n; i++)
        cin >> w[i];*/
    int dp[n+1][s+1];
    for(int i = 0; i <= n; i++)
        for(int j = 0; j <= s; j++)
            dp[i][j] = 0;
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < s; j++)
//            cout << dp[i][j] << " ";
//        cout << endl;
//    }
    for(int j = 1; j <= s; j++)
        if(w[0] <= j)
            dp[1][j] = w[0];
  /*  for(int i = 0; i < n; i++)
        cout << w[i] << " ";
*/
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= s; j++){
            if(j >= w[i-1])
            dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i-1]] + w[i-1]);
            else
            dp[i][j] = dp[i-1][j];
        }
    }
  /*  for(int i = 1; i <= n; i++){
        for(int j = 1; j <= s; j++)
            cout << dp[i][j] << " ";
        cout << endl;
    }*/
    cout << dp[n][s] << endl;
}