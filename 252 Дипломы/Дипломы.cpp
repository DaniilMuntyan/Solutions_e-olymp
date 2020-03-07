#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INT_MAX LONG_MAX
main()
{
    int w, h, n;
    cin >> w >> h >> n;
    int m, l = min(w,h), r = n*max(w,h);
    while(l != r){
        m = (l+r)/2;
        if((m/w)*(m/h) >= n)
            r = m;
        else l = m+1;
    }
    cout << l << endl;
}