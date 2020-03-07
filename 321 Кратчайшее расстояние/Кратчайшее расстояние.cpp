#include <bits/stdc++.h>
using namespace std;
int n, s, f,i,j,a,m;
vector <int> g[1001];
vector <int> d(1001);
queue <int> Q;
void BFS(int k)
{
 d[k] = 1;
 Q.push(k);
 while(!Q.empty())
 {
  k = Q.front();
  Q.pop();
  for(i=0;i<g[k].size();i++)
   if(!d[g[k][i]])
   {
    d[g[k][i]] = d[k] + 1;
    Q.push(g[k][i]);

   }
 }
}
int main()
{
 cin >> n >> s;
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  {
   cin >> a;
   if(a){
    g[i].push_back(j);
   }
  }
 BFS(s);
 for(i=1;i<=n;i++)
    {
        if(i!=s)
        {
            cout << d[i]-d[s] << " ";
        }else
        cout << 0 << " ";
    }


}