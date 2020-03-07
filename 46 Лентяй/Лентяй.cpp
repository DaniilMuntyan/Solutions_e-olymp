#include <bits/stdc++.h>
using namespace std;
struct S
{
    int a,b;
};
bool check(S w, S q)
{
    if((w.a <= q.a && q.a <= w.b) || (q.a <= w.a && w.a <= q.b))
        return true;
    return false;
}
int main()
{
    int t,n,i,j,p;
    bool ans = false;
    vector <S> d(101);
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(i=0;i<n;i++)
            cin >> d[i].a >> d[i].b;
        if(n==1)
            cout << "YES" << endl;
        else{
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(!check(d[i],d[j]))
                {
                    ans = true;
                    break;
                }
            }
            if(ans)
                break;
        }
        if(ans)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        }
        ans = false;
        d.clear();
    }
}