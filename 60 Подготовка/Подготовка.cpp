#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k,n,m;
    cin >> k >> m >> n;
    vector <long> a(k);
    for(int i = 0;i < k;i++)
        cin >> a[i];
    sort(a.rbegin(),a.rend());
    int sum = a[0];
    int i = 0;
    while(sum < n*m)
    {
        i++;
        sum+=a[i];
    }
    cout << i+1 << endl;

}