#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    vector<int> a(3);
    for(int i =0;i<3;i++)
        cin >> a[i];
    sort(a.begin(),a.end());
    cout << a[0]+a[2] << endl;

}