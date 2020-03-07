#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main()
{
    int  n;
    cin >> n;
    int i,j;
    queue <int> a;
    queue <int> b;
    int u = 0;
    for(j = 1; j <= n/2; j++)
    {
            cin >> u;
            a.push(u);
    }
    u = 0;
    for(j = 1; j <= n/2; j++)
    {
        cin >> u;
        b.push(u);
    }
     int r, t;
    i = 0;
    bool cont = true;
    while(cont)
    {
        if(i == 2*100000)
        {
            cout << "draw" << endl;
            exit(0);
        }

        if(a.empty())
    {
        cout << "second " << i << endl;
        exit(0);
    }
    if(b.empty())
    {
        cout << "first " << i << endl;
        exit(0);
    }
        i++;
        r = a.front();
        t = b.front();
        a.pop();
        b.pop();
        if((t == n-1 && r == 0))
        {
            a.push(r);
            a.push(t);
            continue;
        }
        if(t == 0 && r == n-1)
        {
            b.push(r);
            b.push(t);
            continue;
        }
        if(r > t)
        {

            a.push(r);
            a.push(t);
           // cout << "a: " << a.front() << ", " << a.back() << "  b: " << b.front() << ", " << b.back() << endl;

            continue;
        }
        if(t > r)
        {
            b.push(r);
            b.push(t);
           // cout << "a: " << a.front() << ", " << a.back() << "  b: " << b.front() << ", " << b.back() << endl;

            continue;
        }




    }
  


}