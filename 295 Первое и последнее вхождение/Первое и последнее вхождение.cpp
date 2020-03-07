#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    char t;
    int i = 0, last = 0, first = 0;
    bool check = false;
    while(cin >> t){
        i++;
        if(t == 'f'){
            if(last == 0) first = i;
            check = true;
            last = i;
        }
    }
    if(check){
        if(first != last) cout << first-1 << " " << last-1 << endl;
        else cout << last-1 << endl;
    }

}