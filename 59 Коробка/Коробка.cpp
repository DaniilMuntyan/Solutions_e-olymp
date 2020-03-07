#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double a;
    cin >> n;
    for(int i = 0; i<n;i++)
    {
        cin >> a;
        cout << setprecision(10) << fixed << a/6 << endl;
    }
}