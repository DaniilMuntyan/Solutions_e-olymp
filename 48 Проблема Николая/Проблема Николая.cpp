#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    long long n,m,i,res=1;
    cin >> n >> m;
    if(n>=m)
        res = 0;
    else
    for(i=2;i<=n;i++)
    {
        res=(res*i)%m;
    }
    cout << res << endl;

}