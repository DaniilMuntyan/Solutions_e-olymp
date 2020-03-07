#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i=0,a=n;
    if(a==60)
    {
        cout << 1 << " " << 3 << endl;
        return 0;
    }
    for(i=1;a>31;i++)
    {
        if(i==2)
        {
            a-=28;
            continue;
        }
        if(i <= 7)
        {
            if(i % 2 == 1)
                a-=31;
                else
                a-=30;
        }else
        {
            if(i%2==1)
                a-=30;
            else
                a-= 31;
        }
    }
    cout << a << " " << i << endl;
}