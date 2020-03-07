#include <bits/stdc++.h>
#define qq cout << "!!" << endl;
#define ww cout << "??" << endl;
#define rr return 0;
#define nl cout << endl;
 
using namespace std;
 
int main() {
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    vector<int> A(n);
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int ans = 0;
    sort(A.rbegin(), A.rend());
    while(A[0])
    {
        ans++;
        for(int i = 0; i < m; i++)
        {
            A[i]--;
        }
        sort(A.rbegin(), A.rend());
    }
    cout << ans << endl;
}