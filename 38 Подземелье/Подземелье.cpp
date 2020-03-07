#include <bits/stdc++.h>
using namespace std;
#define int long long
struct S{
    int k, i, j;
    S(int a, int b, int c){
        k = a;
        i = b;
        j = c;
    }
    S(){}
    bool operator ==(S b)const{
        return (this->k==b.k && this->i == b.i && this->j == b.j);
    }
};
int si, sj, sl, ei,ej,el;
int l,r,c;
char t[31][31][31];
S stop(el,ei,ej);
queue<S> q;
int d[31][31][31];
bool check(int k, int i, int j){
    return ((k >= 1 && k <= l) && (i >= 1 &&
            i <= r) && (j >= 1 && j <= c));
}
void bfs(int k, int i, int j){
    while(!q.empty()) q.pop();
    stop = S(el,ei,ej);
    d[k][i][j] = 1;
    q.push(S(k,i,j));
    int dk[] = {0, 0, 0, 0, -1, 1};
    int dx[] = {1, 0, -1, 0, 0, 0};
    int dy[] = {0, -1, 0, 1, 0, 0};
    while(!q.empty()){
        S v = q.front();
        q.pop();
        k = v.k;
        i = v.i;
        j = v.j;
        for(int kC = 0; kC < 6; kC++){
            k += dk[kC];
            i += dx[kC];
            j += dy[kC];
            if(check(k,i,j) && (t[k][i][j] != '#') && !d[k][i][j]){
                q.push(S(k,i,j));
                d[k][i][j] = d[v.k][v.i][v.j] + 1;
                if((k == stop.k && i == stop.i && j == stop.j) || t[k][i][j] == 'E'){
                    if(d[k][i][j]-1 >= 0)
                    cout << "Escaped in " << d[k][i][j]-1  <<" minute(s)." << endl;
                    else cout << "Trapped!" << endl;
                    return;
                }
            }

            k -= dk[kC];
            i -= dx[kC];
            j -= dy[kC];
        }
    }
    cout << "Trapped!" << endl;
}
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    char a;
    while(cin >> l >> r >> c){
        if(l == 0 && r == 0 && c == 0)
        return 0;
        for(int k = 1; k <= l; k++){
            for(int i = 1; i <= r; i++){
                for(int j = 1; j <= c; j++){
                    cin >> t[k][i][j];
                    d[k][i][j] = 0;
                    if(t[k][i][j] == 'S'){
                        si = i;
                        sj = j;
                        sl = k;
                    }
                    if(t[k][i][j] == 'E'){
                        ei = i;
                        ej = j;
                        el = k;
                    }
                }
            }
        }
        bfs(sl,si,sj);
    }
}