#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int i;
    cin >> n;
    vector <int> a(n);
    vector <int> d(n);
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    d[0] = a[0];
    d[1] = max(d[0],a[1]);
    for(i=2;i<n;i++)
        d[i] = max(d[i-1],d[i-2] + a[i]);
    cout << d[n-1] << endl;

}