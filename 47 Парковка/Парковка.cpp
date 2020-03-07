#include <bits/stdc++.h>
using namespace std;
#define int long long

main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    int n, t;
    cin >> t;
    while(t--){
    cin >> s;
    n = s.length();
    char t[n+2];
    t[0] = '!';
    t[n+1] = '!';
    t[n+2] = '!';
    int c = 0;
    for(int i = 0; i < n; i++)
        t[i+1] = s[i];
    for(int i = 1; i <= n; i++){
        if(t[i] == '-' && t[i-1] != 'S' &&
           t[i+1] != 'S' && t[i+1] != 'B' &&
           t[i+2] != 'B')
            c++;
    }
    cout << c << endl;
    }
    //cout << t << endl;
   /* for(int i = 1; i <= n; i++)
        cout << t[i] << "";*/
}