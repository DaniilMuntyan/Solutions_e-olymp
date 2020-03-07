#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    /*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    int h,w,l,k;
    cin >> h >> w >> l >> k;
    cout << (h*w*l + k - 1)/k << endl;

}