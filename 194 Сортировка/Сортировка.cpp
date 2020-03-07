#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector <long long> a(n);
    int i;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for(i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;

}