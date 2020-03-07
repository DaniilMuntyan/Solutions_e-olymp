#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i,j;
    vector <int> a(n);
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int mx,mn;
    mx = *max_element(a.begin(),a.end());
    mn = *min_element(a.begin(),a.end());
    replace(a.begin(),a.end(),mx,mn);
    for(i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;
}