#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,ans=0;
    int a,b;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        a-=b;
        if(a != 1)
            ans++;
    }
    cout << ans << endl;
}