#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    int a;
    m = -1001;
    while(cin >> a)
    {
        if(a > m)
            m = a;
    }
    cout << m << endl;
}