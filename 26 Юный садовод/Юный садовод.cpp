#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a, b;
    int n;
    cin >> n;
    a = 1;
    b = n;
    int sum = ((a+b)*(b-a+1))/2;
    sum *= 2;
    cout << sum +1 << endl;
}