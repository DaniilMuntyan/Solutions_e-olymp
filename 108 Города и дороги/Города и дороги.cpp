#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    int n;
    cin >> n;
    int c = 0;
    int a;
    for(register int i = 0; i < n; i++){
        for(register int j = 0; j < n; j++){
            cin >> a;
            if(j > i && a)
                c++;
        }
    }
    cout << c << endl;
    return 0;
}