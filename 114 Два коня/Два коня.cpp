#include <bits/stdc++.h>
using namespace std;
int d[9][9];
queue< pair<int,int> > q;
void bfs(pair<int,int> s, pair<int,int> f, int n){
    d[s.first][s.second] = 1;
    q.push(s);
    int dx[8] = {2, 2, 1, 1, -1, -1, -2, -2};
    int dy[8] = {1, -1, 2, -2, 2, -2, 1, -1};
    while(!q.empty()){
        pair<int,int> v = q.front();
        q.pop();
        int x = v.first,y = v.second;
        pair<int,int> to;
        for(int i = 0; i < 8; i++){
            x += dx[i];
            y += dy[i];
            to = {x,y};
            if((x <= 8 && x >= 1) && (y <= 8 && y >= 1) && !d[x][y]){
                q.push(to);
                d[x][y] = d[v.first][v.second] + 1;
                if(f == to) {
                    int ans = d[x][y]-1;
                    if(ans%2==0)
                        cout << ans/2 << endl;
                    else
                        cout << -1 << endl;
                    return;
                }
            }
            x -= dx[i];
            y -= dy[i];
        }
    }
    cout << "-1" << endl;
}
int main()
{
    int n = 8;
    char a, b;
    int i1, j1,i2,j2;
    cin >> a >> j1;
    switch(a){
    case 'a':
        i1 = 1;
        break;
    case 'b':
        i1 = 2;
        break;
    case 'c':
        i1 = 3;
        break;
    case 'd':
        i1 = 4;
        break;
    case 'e':
        i1 = 5;
        break;
    case 'f':
        i1 = 6;
        break;
    case 'g':
        i1 = 7;
        break;
    case 'h':
        i1 = 8;
        break;
    }
    cin >> b >> j2;
    switch(b){
    case 'a':
        i2 = 1;
        break;
    case 'b':
        i2 = 2;
        break;
    case 'c':
        i2 = 3;
        break;
    case 'd':
        i2 = 4;
        break;
    case 'e':
        i2 = 5;
        break;
    case 'f':
        i2 = 6;
        break;
    case 'g':
        i2 = 7;
        break;
    case 'h':
        i2 = 8;
        break;
    }
    bfs({i1,j1},{i2,j2}, 8);
}