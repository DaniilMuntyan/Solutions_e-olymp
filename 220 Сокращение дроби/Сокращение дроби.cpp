#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a, int b){
    if(a == 0 || b == 0)
    return a+b;
    if(a>b)
        return gcd(a%b,b);
    else
        return gcd(a,b%a);
}
main()
{
    int a, b;
    cin >> a >> b;
   // bool check = false;
    int flag = 0;
    if(a*b >= 0){// check = true;
        if(a < 0)
        {
            flag = 3;
            a*=-1;b*=-1;
        }
    }
    else
    {
      //  check = false;
        if(a < 0){
            a*=-1;
            flag = 1;
        }
        if(b < 0){ b*=-1;
            flag = 2;
        }
    }
    int g = gcd(a,b);
    while(g != 1){
        g = gcd(a,b);
        a /= g;
        b /= g;
       // cout << g << " " << a << b << endl;
    }
    if(flag == 1)
        cout << "-" << a << " " << b << endl;
    if(flag == 2)
        cout << a << " " << "-" << b << endl;
    if(flag == 3)
        cout << "-" << a << " -" << b << endl;
    if(flag == 0)
    cout << a << " " << b << endl;
}