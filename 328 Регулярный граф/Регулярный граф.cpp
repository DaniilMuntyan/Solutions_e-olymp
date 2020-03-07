#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n,m;
    cin >> n >> m;
    long i;
    vector <long> g[n+1];
    long a,b;
    for(i=0;i<m;i++)
    {
        cin >> a >> b;
        g[a-1].push_back(b-1);
        g[b-1].push_back(a-1);
    }
    int p = g[0].size();
    for(i=0;i<n;i++)
    {
        if(g[i].size() != p)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}