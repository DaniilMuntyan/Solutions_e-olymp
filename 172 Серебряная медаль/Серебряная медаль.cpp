#include <bits/stdc++.h>
using namespace std;
int n;
vector <int> a;
int i,j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> j;
        a.push_back(j);
    }
    sort(a.rbegin(),a.rend());
    j=0;
    i=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(a[i] != a[j])
        {
            cout << a[j] << endl;
            return 0;
        }
    }
}