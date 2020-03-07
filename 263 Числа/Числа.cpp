#include <bits/stdc++.h>
using namespace std;
int s,f;
vector <int> p(10001,-1);
vector <int> used(10001,0);
queue <int> q;
int sdR(int a)
{
    int t,s,d,e;
    e = a%10;
    a/=10;
    d = a%10;
    a/=10;
    s = a%10;
    a /=10;
    t = a%10;
    return (e*1000 + t*100 + s*10 + d);
}
int sdL(int a)
{
    int t,s,d,e;
    e = a%10;
    a/=10;
    d = a%10;
    a/=10;
    s = a%10;
    a /=10;
    t = a%10;
    return (s*1000 + d*100 + e*10 + t);
}
void bfs(int k)
{
    q.push(k);
    used[k] = -1;
    while(!q.empty())
    {
        k = q.front();
        q.pop();
        if(k==f)
            return;
        if(k + 1000 < 10000 && !used[k+1000])
        {
            used[k+1000] = k;
            q.push(k+1000);
        }
        if((k%10)!=1 && !used[k-1])
        {
            used[k-1] = k;
            q.push(k-1);
        }
        if(!used[sdR(k)])
        {
            used[sdR(k)] = k;
            q.push(sdR(k));
        }
        if(!used[sdL(k)])
        {
            used[sdL(k)] = k;
            q.push(sdL(k));
        }
    }
}
int main()
{
    cin >> s >> f;
    bfs(s);
    vector <int> ans;
    ans.push_back(f);
    while(f != s)
    {
        ans.push_back(used[f]);
        f = used[f];
    }
    reverse(ans.begin(),ans.end());
    for(int i = 0; i < ans.size();i++)
    {
        cout << ans[i] << endl;
    }
}