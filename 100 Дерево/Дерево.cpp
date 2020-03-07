#include <bits/stdc++.h>
using namespace std;
int n,m;
int k=0,i,j;
int color[101]{-1};
int a;
vector <int> G[101];
bool used[101]={};
void proc(int v)
{

    used[v] = true;
    for(int u = 0;u < G[v].size(); u++)
    {
        if(used[G[v][u]]!=true)
        {
         /*  if(color[G[v][u]]==1)
            {
                cout << "NO" << endl;
                return ;
            }
*/
            k++;
            proc(G[v][u]);
        }
    }
      // color[v] = 2;

}
int main()
{

    cin >> n;
    int cr=0;
    if(n==1)
    {
        int one;
        cin >> one;
        cout << "YES" << endl;
        return 0;
    }
    bool T=true;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin >> a;
            if(a==1)
                T = false;
          if(j>i)
   {
    if(a==1)
    {
     cr++;
     G[i].push_back(j);
     G[j].push_back(i);
    }
   }
        }
        if(T)
        {
            cout << "NO" << endl;
            return 0;
        }
        T = true;
    }
   /* for(i = 0; i < n; i++)
    {
        if(used[i]!=true)
            proc(i);
    }*/
    proc(1);
    if(k == cr)
        cout << "YES" << endl;
    else
        cout <<"NO" << endl;
}