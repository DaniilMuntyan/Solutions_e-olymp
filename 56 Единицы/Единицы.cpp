#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,res=0,flag=0;
    cin >> a;
    while(a >= 0)
    {
        if(a%2 == 1)
            res++;
        a/=2;
        if(a==0)
            flag=1;
        if(flag)
            break;
    }
    cout << res << endl;
}