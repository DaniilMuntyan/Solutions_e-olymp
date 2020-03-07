#include <bits/stdc++.h>
using namespace std;
int n, m;
int i, j;
vector <int> a[1005];
vector <int> color(1005);
bool bl = false;
void DFS(int v, int c)
{
    if(bl)
        return;
    color[v]=c;
    for(i = 0; i < a[v].size(); i++)
    {
        if(color[a[v][i]] == 0)
        {
            DFS(a[v][i],3-c);
        }else
        {
            if(color[a[v][i]] == c)
            {
               bl = true;
               return;
            }
        }
    }

}
int main()
{
    while(cin >> n){
            if(n==0){
            exit(0);
            }
    cin  >> m;
      int x,y;

    for(i = 0; i < m;i++)
    {

        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    for(i = 0; i < n; i++)
        if(color[i] == 0)
            DFS(i,1);
    if(!bl)
        cout << "BICOLOURABLE." << endl;
    else
    cout << "NOT BICOLOURABLE." << endl;
    bl = false;
    color = vector <int> (1005,0);
    for(i=0;i<1000;i++)
        a[i].clear();
    }


}