#include <bits/stdc++.h>
using namespace std;
struct S
{
    int k;
    int t;
    int number;
};
bool p(S a, S b)
{
    if(a.number > b.number)
        return true;
    return false;
}
bool g(S a, S b)
{
    if(a.t == b.t)
    {
        return p(a,b);}
    else{
    if(a.t > b.t)
        return true;
    return false;
    }
}
bool y(S a, S b)
{
    if(a.k == b.k)
        return g(a,b);
    else
    {
    if(a.k < b.k)
        return true;
    return false;
    }
}

int main()
{
    int n;
    cin >> n;
    int i;
    S a[n+1];
    for(i = 0; i < n; i++)
    {
        cin >> a[i].k >> a[i].t;
        a[i].number = i+1;
    }

    sort(a,a+n,y);
    for(i=n-1;i>=0;i--)
    {
        cout << a[i].number << " ";
    }
}