#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int sum = 0;
    while(n > 0){
        sum++;
        n-=k;
    }
    while(m>0){
        sum++;
        m-=k;
    }
    cout << sum << endl;
}