#include <bits/stdc++.h>
using namespace std;
struct S
{
    int L=0,p=0;
};
int n, s, f,i,j,a,m,b;
vector <int> g[100000];
vector <S> d(50000);
queue <int> Q;
vector <int> r;

void BFS(int s,int y)
{
 d[s].L = 1;
 Q.push(s);
 while(!Q.empty())
 {
  int k = Q.front();
  Q.pop();
  for(i=0;i<g[k].size();i++)
   if(!d[g[k][i]].L)
   {
    d[g[k][i]].L = d[k].L + 1;
     r.push_back(k);
    Q.push(g[k][i]);
                if(g[k][i]==y)
                    return;
   }
 }
}
int main()
{
 cin >> n >> m >> s >> f;

  for(j=1;j<=m;j++)
  {
   cin >> a >> b;
    g[a].push_back(b);
                g[b].push_back(a);
  }
        BFS(s,f);
        if(d[f].L-1==-1){
        cout << d[f].L-1 << endl;
        exit(0);
        }else
          cout << d[f].L-1 << endl;
       for(i=0;i<r.size();i++)
        cout << r[i] << " ";
       cout << f << endl;
      //  cout << f << endl;
}