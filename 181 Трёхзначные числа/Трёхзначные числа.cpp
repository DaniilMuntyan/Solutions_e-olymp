#include <bits/stdc++.h>
using namespace std;
bool check(int x)
{
    int t1,t2,t3;
    t1 = x % 10;
    x /= 10;
    t2 = x% 10;
    x /= 10;
    t3 = x % 10;
    if(t1 != t2 && t1 != t3 && t2 != t3)
        return true;
    return false;

}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int a, b, i;
    cin >> a >> b;
    for(i=a;i<=b;i++)
    {

        if(check(i))
            cout << i << endl;
    }

}