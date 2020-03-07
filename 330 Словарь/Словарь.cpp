#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <string> d(n);
    for(int i = 0; i < n; i++)
        cin >> d[i];
    sort(d.begin(),d.end());
    for(int i = 0; i < n; i++)
        cout << d[i] << endl;
}