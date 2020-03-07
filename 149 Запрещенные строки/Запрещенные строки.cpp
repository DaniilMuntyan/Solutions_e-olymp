#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector <long long> a(31);
    while(cin >> n)
    {
        a.clear();
        a[1] = 3;
        a[2] = 9;
        if(n <= 2)
        {
            cout << a[n] << endl;
            continue;
        }
        for(int i = 3;i<=n;i++)
            a[i] = 2*a[i-1] + a[i-2];
        cout << a[n] << endl;

    }
}