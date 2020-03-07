#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin >>n ;
    long i,j,c=0;
    for(i=1;i<=n;i++)
    {
        c+=(n/i);
    }
cout << c << endl;
}