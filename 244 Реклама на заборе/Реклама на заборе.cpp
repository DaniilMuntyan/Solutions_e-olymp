#include <bits/stdc++.h>
using namespace std;
struct S
{
    int a,b;
};
int m, n, i, j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin >> m >> n;
    vector <S> d(n);
    vector <int> f(m,0);
    vector <int> u(m,1);
    for(i=0;i<n;i++)
    {
        cin >> d[i].a >> d[i].b;
        for(j=d[i].a-1;j<d[i].b;j++)
        {
            f[j]=1;
        }
    }
    if(f == u)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}