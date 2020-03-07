#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    if(n == 1){
        cout << 0 << endl;
        return 0;
    }
    int a, b;
    int d[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) d[i][j] = 0;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        --a; --b;
        d[a][b] = 1;
        d[b][a] = 1;

    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << d[i][j] << " ";
        cout << endl;
    }
}