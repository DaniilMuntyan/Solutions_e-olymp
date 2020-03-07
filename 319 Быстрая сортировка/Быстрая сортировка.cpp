#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    vector <int> d;
    int a,i=0;
    while(cin >> a)
            d.push_back(a);

    sort(d.begin(),d.end());
    for(i=0;i<d.size();i++)
        cout << d[i] << " ";
    cout << endl;
}