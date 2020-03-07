#include <bits/stdc++.h>
using namespace std;
#define int long long

main()
{
   /* freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        cout << (1<<a)-1 << endl;
    }
}