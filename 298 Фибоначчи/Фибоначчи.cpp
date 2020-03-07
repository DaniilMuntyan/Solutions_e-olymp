#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    vector <long> d(n+1);
    d[0] = 1;
    d[1] = 1;
    for(int i = 2; i <= n;i++)
    {
        d[i] = d[i-1] + d[i-2];
    }
    cout << d[n] << endl;
}