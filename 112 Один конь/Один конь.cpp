#include <bits/stdc++.h>
using namespace std;
vector < pair<int,int> > g[501];
int d[501][501];
queue< pair<int,int> > q;
void bfs(pair<int,int> s, pair<int,int> f, int n){
    d[s.first][s.second] = 1;
    //d[s] = 1;
    q.push(s);
    int dx[8] = {2, 2, 1, 1, -1, -1, -2, -2};
    int dy[8] = {1, -1, 2, -2, 2, -2, 1, -1};
    bool c = false;
    while(!q.empty()){
        pair<int,int> v = q.front();
        q.pop();
        int x = v.first,y = v.second;
        pair<int,int> to;
        for(int i = 0; i < 8; i++){
            x += dx[i];
            y += dy[i];
            to = {x,y};
            if((x <= n && x >= 1) && (y <= n && y >= 1) && !d[x][y]){
                q.push(to);
                d[x][y] = d[v.first][v.second] + 1;
                if(f == to) {
                    cout << d[x][y]-1 << endl;
                    return;
                }
            }
            x -= dx[i];
            y -= dy[i];
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int d[n][n];
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    pair<int,int> one(x1,y1), two(x2,y2);
    bfs(one,two, n);
}