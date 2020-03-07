#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a, b;
    cin >> a >> b;
    if(b < a) swap(a,b);
    cout << ((a+b)*(b-a+1))/2 << endl;
}