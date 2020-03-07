#include <bits/stdc++.h>
using namespace std;
#define int long long
 main()
{
    int a, b;
    cin >> a;
    vector <int> f(a+1);
    for(int i = 1; i <= a; i++)
        cin >> f[i];
    cin >> b;
    vector <int> g(b+1);
    for(int j = 1; j <= b; j++)
        cin >> g[j];
    int d[a+1][b+1];
    for(int i = 0; i <= a; i++)
        d[i][0] = 0;
    for(int j = 0; j <= b; j++)
        d[0][j] = 0;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            if(f[i] == g[j])
                d[i][j] = d[i-1][j-1] + 1;
            else
                d[i][j] = max(d[i-1][j], d[i][j-1]);
        }
    }
    cout << d[a][b] << endl;
}