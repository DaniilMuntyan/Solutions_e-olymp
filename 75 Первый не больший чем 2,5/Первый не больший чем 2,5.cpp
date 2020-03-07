#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ansI;
    double ans = -1;
    cin >> n;
    vector <double> a(n);
    bool f = true;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] <= 2.5 && f)
        {
            ansI = i+1;
            ans = a[i];
            f = false;
        }
    }
    if(ans == -1)
        cout << "Not Found" << endl;
    else
    cout << ansI << " " << ans << endl;
}