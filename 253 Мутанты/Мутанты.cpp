#include <bits/stdc++.h>
using namespace std;
int main()
{
      ios_base::sync_with_stdio(0);
int n;
int m;

long long c[200001] = {};
int i,j;

    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> j;
        c[j]++;
    }

    cin >> m;
    for(i=0;i<m;i++)
    {
        cin >> j;
        cout << c[j] << endl;
    }

}