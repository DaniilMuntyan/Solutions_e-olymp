#include <bits/stdc++.h>
using namespace std;
#define int long long
int c[501][501];
int f(int n, int k){
    if(k == 0) return c[n][k] = 1;
    if(c[n][k] > 0) return c[n][k];
    if(n-k < k) return f(n,n-k);
    return c[n][k] = (f(n-1, k) + f(n-1,k-1))%9929;
}
main()
{
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < 501; i++)
        for(int j = 0; j < 501; j++) c[i][j] = -1;
    cout << f(n,k) << endl;
}