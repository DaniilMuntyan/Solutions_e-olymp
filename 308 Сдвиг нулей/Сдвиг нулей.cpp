#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i;
    vector <int> d(n);
    vector <int> a;
    for(i=0;i<n;i++){
        cin >> d[i];
        if(d[i] == 0)
            a.push_back(0);
    }
    for(i=0;i<n;i++)
        if(d[i] != 0)
            cout << d[i] << " ";
    for(i=0;i<a.size();i++)
        cout << a[i] << " ";
    cout << endl;

}