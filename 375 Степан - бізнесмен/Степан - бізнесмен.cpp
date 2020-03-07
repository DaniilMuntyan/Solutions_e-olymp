#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin >> n >> m;
    vector <long> a(n);
    vector <long> b(m);
    int i;
    for(i=0;i<n;i++)
        cin >> a[i];
    for(i=0;i<m;i++)
        cin >> b[i];
    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
    i = 0;
    long long sum  = 0;
    while(b[i] > a[i] && i < min(n,m))
    {
        sum += b[i] - a[i];
        i++;
    }
    cout << sum << endl;
}