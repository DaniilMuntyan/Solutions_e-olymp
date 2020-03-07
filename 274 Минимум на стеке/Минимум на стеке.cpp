#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    stack<int> s;
    multiset<int> d;
    cin >> n;
    int t,a;
    while(n--){
        cin >> t;
        if(t == 1){
            cin >> a;
            s.push(a);
            d.insert(a);
        }
        if(t == 2){
            d.erase(s.top());
            s.pop();
        }
        if(t == 3)
            cout << *(d.begin()) << endl;

    }
}