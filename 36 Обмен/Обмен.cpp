#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    while(n--){
        int a;
        string s = "GCV";
        cin >> a;
        for(int i = 1; i <= a; i++){
            swap(s[2],s[1]);
            swap(s[1],s[0]);
        }
        cout << s << endl;
    }
}