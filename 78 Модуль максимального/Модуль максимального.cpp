#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,i;
    cin >> n;
    vector<double> d(n);
    cin >> d[0];
    double m = abs(d[0]);
    for(i=1;i<n;i++)
    {
        cin >> d[i];
        if(abs(d[i]) > m)
            m = abs(d[i]);

    }
    cout << fixed << setprecision(2) << m << endl;
}