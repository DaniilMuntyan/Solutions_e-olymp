#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    if(n == 1 && m == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    int c = 1, k = 0;
    int ans[n][m];
    if(n == 1 || m == 1){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                k++;
                if(k == 4){
                    k = 1;
                    c++;
                }
                ans[i][j] = c;
            }
        }
        if(k != 3){
        if(n%2==0){
            for(int j = 0; j < k; j++)
                ans[n-1][j] = 0;
        }else
            for(int j = m-1; j >= (m-k); j--)
                ans[n-1][j] = 0;
        }
    }else{
    for(int i = 0; i < n; i++){
        if(i%2==0){
            for(int j = 0; j < m; j++){
                k++;
                if(k == 4){
                    k = 1;
                    c++;
                }
                ans[i][j] = c;
            }
        }else
            for(int j = m-1; j >= 0; j--){
                k++;
                if(k == 4){
                    k = 1;
                    c++;
                }
                ans[i][j] = c;
            }
    }
    if(k != 3){
        if(n%2==0){
            for(int j = 0; j < k; j++)
                ans[n-1][j] = 0;
        }else
            for(int j = m-1; j >= (m-k); j--)
                ans[n-1][j] = 0;
    }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}