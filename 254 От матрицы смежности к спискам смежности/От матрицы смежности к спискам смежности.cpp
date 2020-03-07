#include <bits/stdc++.h>
using namespace std;
    vector <int> g[101];
int main()
{
    int n;
    cin >> n;
    int i,j, t;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> t;
            if(t)
                g[i].push_back(j);


        }
    }
    for(i=0;i<n;i++)
    {
        cout << g[i].size() << " ";
        for(j=0;j<g[i].size();j++)
        {
            cout << g[i][j]+1 << " ";

        }
        cout << endl;
    }
    cout << endl;
}