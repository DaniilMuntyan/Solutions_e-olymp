#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> d(n);
    int i,a;
    for(i=0;i<n;i++)
    {
        cin >> d[i];
    }
    cout << d[0] << " ";
    for(i=1;i<n;i++)
    {
        if(d[i-1]!=d[i])
            cout << d[i] << " ";

    }
}