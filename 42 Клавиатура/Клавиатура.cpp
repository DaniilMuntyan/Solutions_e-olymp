#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n;
    vector < pair<int,int> > p(n);
    int i;
    int a;
    for(i = 0; i < n; i++)
    {
        cin >> a;
        p[i].first = 0;
        p[i].second = a;
    }
    cin >> m;
    for(i = 0; i < m; i++)
    {
        cin >> a;
        p[a-1].first++;
    }
    for(i = 0; i < n; i++)
    {
        if(p[i].first > p[i].second)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}