#include <bits/stdc++.h>
#define qq cout << "!!" << endl;
#define ww cout << "??" << endl;
#define rr return 0;
#define nl cout << endl;
#define N 201
 
using namespace std;
 
bool A[N][N];
 
int main() {
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    while(m--)
    {
        int a, b;
        cin >> a >> b;
        A[a][b] = A[b][a] = 1;
    }
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = i + 1; j <= n; j++)
        {
            for(int h = j + 1; h <= n; h++)
            {
                if(!(A[i][j] || A[i][h] || A[j][h]))
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}