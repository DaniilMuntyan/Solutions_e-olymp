#include <bits/stdc++.h>
using namespace std;
struct S{
    int a,b, dist;
}g[1000001];
int mas[1000001];
int Repr(int n){
    if(n == mas[n])
        return n;
    return mas[n] = Repr(mas[n]);
}
int Union(int x, int y){
    int x1 = Repr(x),y1 = Repr(y);
    mas[x1] = y1;
    return (x1 != y1);
}
int f(S a, S b)
{
  return (a.dist < b.dist);
}
int main()
{
    int n, m;
    scanf("%d %d",&n,&m);
    for(int i = 1; i <= n; i++) mas[i] = i;
    for(int i = 0; i < m; i++)
        scanf("%d %d %d",&g[i].a,&g[i].b,&g[i].dist);

    sort(g, g+m, f);
    int k = -1;
    for(int i = 0; i < m; i++){
        Union(g[i].a,g[i].b);
        k = max(k, g[i].dist);
        if(Repr(1) == Repr(n)){
            break;;
        }
    }
    printf("%d\n", k);
}