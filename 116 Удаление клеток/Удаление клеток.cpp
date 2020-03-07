#include <bits/stdc++.h>
using namespace std;
int used[101][101];
char t[101][101];
void dfs(int i, int j){
    used[i][j] = true;
    if(t[i+1][j] == '#' && !used[i+1][j])
        dfs(i+1,j);
    if(t[i][j+1] == '#'&& !used[i][j+1])
        dfs(i,j+1);
    if(t[i-1][j] == '#'&& !used[i-1][j])
        dfs(i-1,j);
    if(t[i][j-1] == '#'&& !used[i][j-1])
        dfs(i,j-1);
}
int main()
{
    int n,m,ans = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m;j++){
        cin >> t[i][j];
        used[i][j] = false;
    }
    for(int i = 0; i < n;i++)
        for(int j = 0; j < m; j++)
            if(!used[i][j] && t[i][j] == '#'){
                ans++;
                dfs(i,j);
            }
    cout << ans << endl;
}