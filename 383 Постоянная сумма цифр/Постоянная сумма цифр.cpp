#include <bits/stdc++.h>
using namespace std;
int sum(int a)
{
    int i=0;
    while(a>0)
    {
        i+=a%10;
        a/=10;
    }
    return i;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,ans=0;
    cin >> n;
    int i;
    for(i=10;i<100;i++)
    {
        if(sum(i) == sum(n*i))
            ans++;
    }
    cout << ans << endl;
}