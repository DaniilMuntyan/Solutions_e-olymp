#include <bits/stdc++.h>
using namespace std;
int d[101][101];
int a[101][101];
int n,m;
queue < pair<int,int> > q;
int bfs(int x, int y){
    while(!q.empty())
        q.pop();
    if(a[x][y] == 1)
        return 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            d[i][j] = 0;
    d[x][y] = 1;
    q.push({x,y});
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    while(!q.empty()){
        pair<int,int> v = q.front();
        q.pop();
        int x = v.first, y = v.second;
        for(int i = 0; i < 4; i++){
            x += dx[i];
            y += dy[i];
            if((x >= 0 && x < n) && (y >= 0 && y < m) && !d[x][y]){
                q.push({x,y});
                d[x][y] = d[v.first][v.second] + 1;
                if(a[x][y] == 1){
                    return (d[x][y]-1);
                }
            }
            x -= dx[i];
            y -= dy[i];
        }
    }
}
int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << bfs(i,j) << " ";
        }
        cout << endl;
    }
}