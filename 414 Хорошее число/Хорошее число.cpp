#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unsigned long long a = 1;
    for(int i = 1;i<=n;i++)
    {
        a*=5;
    }
    cout << a << endl;

}