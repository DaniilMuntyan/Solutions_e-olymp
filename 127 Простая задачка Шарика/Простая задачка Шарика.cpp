#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,i,j,c=0;
    cin >> n;
    long f[n+3];
    f[1] = 2;
    f[2] = 4;
    f[3] = 7;
    for(i=4;i<=n;i++)
        f[i] = (f[i-3] + f[i-2] + f[i-1]);
    cout << f[n] << endl;
}