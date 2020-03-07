#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int n,m;
    n = 4;
    m = 2*max(a,b);
    char t[n][m];
    for(int i = 0; i < m; i++)
    {
        t[0][i] = '@';
        t[1][i] = '@';
        t[2][i] = '.';
        t[3][i] = '.';
    }
    for(int i = 0; i < b-1;i++)
        t[0][2*i] = '.';
    for(int i = 0; i < a-1; i++)
        t[3][2*i] = '@';
    cout << n << " " << m << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << t[i][j];
        cout << endl;
    }


}