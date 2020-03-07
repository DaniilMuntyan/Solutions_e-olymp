#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k,c=1,p = 0,q=0;
    cin >> n >> m >> k;
    vector <int> d(k);
    int ans[n][m];
    for(int i = 0; i < k;i++)
        cin >> d[i];
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0){
        for(int j = 0; j < m; j++)
        {
            p++;
            ans[i][j] = c;
            if(p >= d[q])
            {
                q++;
                c++;
                p = 0;
            }
        }
        }
        else{
        for(int j = m-1; j >= 0; j--)
        {
            p++;
            ans[i][j] = c;
            if(p >= d[q])
            {
                q++;
                c++;
                p = 0;
            }
        }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << ans[i][j] << " ";
        }
    cout << endl;
    }
}