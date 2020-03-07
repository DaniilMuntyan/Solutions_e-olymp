#include <bits/stdc++.h>
using namespace std;
#define int long long
struct E{
    int a, b, dist;
};
vector <E> g(100001);
vector <int> mas(20001), len(20001);
int Repr(int n){
    if(n == mas[n]) return n;
    return mas[n] = Repr(mas[n]);
}
int Union(int x, int y){
    x = Repr(x);
    y = Repr(y);
    if(x == y) return 0;
    if(len[x] < len[y]) swap(x,y);
    mas[y] = x;
    len[x] += len[y];
    return 1;
}
int f(E a, E b){
    return (a.dist < b.dist);
}
main()
{
    int n, m, a, b, c;
    cin >> n >> m;
    g.resize(m);
    len.resize(n);
    mas.resize(n);
    for(int i = 0; i < n; i++) mas[i] = i, len[i]=1;
    for(int i = 0; i < m; i++){
        cin >> a >> b >> g[i].dist;
        g[i].a = a;
        g[i].b = b;
    }
    sort(g.begin(), g.end(), f);
    int res = 0;
    for(int i = 0; i < m; i++)
        if(Union(g[i].a, g[i].b))
            res += g[i].dist;
    cout << res << endl;
}