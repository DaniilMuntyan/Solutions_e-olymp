#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    int a,b;
    cin >> a >> b;
    if(a > b) swap(a,b);
    b = (b%2==0) ? --b : b;
    a = (a%2==0) ? ++a : a;
    cout << ((a+b)*(abs(b-a)/2 + 1))/2 << endl;
}