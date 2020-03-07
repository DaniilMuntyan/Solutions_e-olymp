#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector <int> g[n+1];
    int i,j,k;
    int a,b;
    vector <int> d;
    for(i=0;i<m;i++)
    {
        cin >> a >> b;
        g[a-1].push_back(b-1);
        g[b-1].push_back(a-1);
    }
    cin >> k;
    for(i=0;i<n;i++)
    {
        if(g[i].size() >= k){
            d.push_back(i+1);
        }
    }
    cout << d.size() << endl;
    for(i=0;i<d.size();i++)
        cout << d[i] << " ";
}