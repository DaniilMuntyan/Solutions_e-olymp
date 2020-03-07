#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin >> n;
    vector <long> f(n);
    int i;
    f[0] = 2;
    f[1] = 3;
    for(i=2;i<n;i++)
        f[i] = f[i-1] + f[i-2];
    cout << f[n-1] << endl;
    
}