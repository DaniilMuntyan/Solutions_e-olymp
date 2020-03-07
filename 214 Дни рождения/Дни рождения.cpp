#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin >> n;
    vector <int> a(n);
    if(n==0)
    {
        cout << 0 << endl;
        return 0;
    }
    int i;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int k = 1;
    sort(a.begin(),a.end());
    for(i=1;i<n;i++)
    {
        if(a[i] != a[i-1])
            k++;
    }
    cout << k << endl;
}