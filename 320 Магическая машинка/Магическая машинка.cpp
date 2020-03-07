#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> d(10e3);
queue<int> q;
int add(int a){
    int sum = 0;
    int n = a;
    while(n > 0){
        sum += n%10;
        n /= 10;
    }
    a += sum;
    return a;
}
void bfs(int s, int f){
    d[s] = 1;
    int p = 0;
    q.push(s);
    while(!q.empty()){
        int v = q.front();
        q.pop();
        if(v == f){
            cout << d[f]-1 << endl;
            return;
        }
        p++;
        if(3*v > 0 && 3*v < 9999 && !d[3*v]){
            q.push(v*3);
            d[3*v] = d[v] + 1;
        }
        int c = add(v);
        if(c > 0 && c < 9999 && !d[c]){
            q.push(c);
            d[c] = d[v] + 1;
        }
        if((v-2) > 0 && (v-2) < 9999 && !d[v-2]){
            q.push(v-2);
            d[v-2] = d[v] + 1;
        }

    }
}
main()
{
    int a,b;
    cin >> a >> b;
    bfs(a,b);
}