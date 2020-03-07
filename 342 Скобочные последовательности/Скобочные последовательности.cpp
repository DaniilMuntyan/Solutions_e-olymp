#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector <char> t;
    char a;
    int c = 0, ans = 0;
    while(cin >> a){
        t.push_back(a);
        if(a == '('){
            if(c < 0){
                ans += abs(c);
                c = 0;
            }
            c++;
        }
        if(a == ')')
            c--;

    }
    if(t.size() == 0)
        cout << "YES" << endl;
    else{
        if(abs(c) + ans == 0)
            cout << "YES" << endl;
        else cout << "NO" << endl;

    }

}