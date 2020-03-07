#include <bits/stdc++.h>
using namespace std;
int d[51][51];
pair<int,int> p[51][51];
queue< pair<int,int> > q;
char t[51][51];
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
            if((x <= n && x >= 1) && (y <= n && y >= 1) && !d[x][y] && (t[x][y] != '#')){
                q.push(to);
               // cout << x << " " << y << endl;
                d[x][y] = d[v.first][v.second] + 1;
                p[x][y] = v;
                if(f == to) {
                    int r,w;
                    r = x;
                    w = y;
                    pair<int,int> curr;
                    while(true){
                        curr = p[r][w];
                        r = curr.first;
                        w = curr.second;
                        t[r][w] = '@';
                        if(curr == s) break;
                    }
                    for(int i = 1; i <= n; i++){
                        for(int j = 1; j <= n; j++)
                            cout << t[i][j];
                        cout << endl;
                    }
                    return;
                }
            }
            x -= dx[i];
            y -= dy[i];
        }
    }
    cout << "Impossible" << endl;
}
int main()
{
    int n;
    cin >> n;
    int x1,y1,x2,y2;
    bool c = false;
    pair<int,int> one, two;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> t[i][j];
            if(t[i][j] == '@' && !c){
                one = {i,j};
                c = true;
            }
            if(t[i][j] == '@' && c)
                two = {i,j};
        }
    }
    bfs(one,two, n);
}