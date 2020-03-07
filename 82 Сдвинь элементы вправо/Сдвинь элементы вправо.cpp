#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin >> n;
    vector <int> d(n);
    for(int i = 0; i < n; i++)
        cin >> d[i];
    cout << d[n-1] << " ";
    for(int i = 0; i < n-1; i++)
        cout << d[i] << " ";
        cout << endl;

}