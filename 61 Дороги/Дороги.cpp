#include <bits/stdc++.h>
using namespace std;

vector <long long> G[10001];
vector <bool> used(10001);
void proc(long long v)
{
     used[v] = true;
     for(long long u = 0; u < G[v].size(); u++)
         if(!used[G[v][u]])
         {
             proc(G[v][u]);
         }


}
int main()
{
    long long n,s,f,m;
long long k = 0;
long long i = 0, j = 0;
    cin >> n >> m;
while(m--)
{
    cin >> s >> f;
    G[s].push_back(f);
    G[f].push_back(s);
}
    for(i=1;i<=n;i++)
    {
        if(!used[i])
            {
                proc(i);
                 k++;
            }
    }
    cout << (k-1) << endl;

}