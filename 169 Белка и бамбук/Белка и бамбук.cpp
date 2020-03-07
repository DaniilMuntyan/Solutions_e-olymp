#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    register int n;
    stack<int> s, s2;
    cin >> n;
    s.push(-1);
    while(n--){
        int t;
        cin >> t;
        if(t > 0)
            s.push(max(t,s.top()));
        else{
            s.pop();
            cout << s.top() << endl;
        }
    }
}