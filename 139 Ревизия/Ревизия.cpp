#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long n;
    cin >> n;
    vector <long> a(n);
    long i;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    cout << a[0] << " " << a[1] << endl;
    return 0;
}